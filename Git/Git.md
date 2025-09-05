# 1 什么是Git

Git是一个**分布式版本控制系统**，由Linus Torvalds于2005年创建，最初旨在管理Linux内核开发。它能高效处理从小型到超大型项目的版本管理，其核心优势包括：

-   **分布式架构**：每位开发者都拥有完整的代码仓库副本，支持离线工作与提交，再通过网络同步。
-   **高效的分支管理**：创建、合并和切换分支非常便捷，适合并行开发。
-   **数据完整性**：采用SHA-1哈希算法确保版本数据完整性，防止历史记录被篡改。
-   **速度快**：多数操作在本地执行，无需网络连接，响应迅速。

Git通过跟踪文件的变化来管理工作流程，允许开发者回滚到任意历史版本，是现代软件开发中不可或缺的协作工具。

# 2 下载并安装Git

Git支持Windows、macOS和Linux三大操作系统。以下是主要的安装方式：

| 操作系统 | 安装方法 |
| - | - |
| **Windows** | 1. 访问[Git官网](https://git-scm.com/download/win)下载安装程序。<br>2. 运行.exe文件，按向导安装，关键配置：<br>   - 组件：勾选`Git Bash Here`和`Git GUI Here`<br>   - PATH环境：选择`Git from the command line and also from 3rd-party software`<br>   - 行尾转换：推荐`Checkout Windows-style, commit Unix-style line endings` |
| **macOS**   | **方法一（推荐）**：使用Homebrew：<br>`brew install git`<br>**方法二**：下载官方.dmg安装包                          |
| **Linux**   | 使用系统包管理器：<br>**Debian/Ubuntu**：`sudo apt update && sudo apt install git -y`<br>**RHEL/CentOS**：`sudo yum install git -y` |

安装完成后，在终端（Windows可用Git Bash）运行 `git --version` 即可验证是否成功。

# 3 将Git配置连接到Github

GitHub​ 是一个基于云的代码托管平台，为软件开发和 Git 版本控制提供 Internet 托管服务，帮助开发者存储和管理代码，并跟踪代码更改。

连接GitHub通常推荐使用SSH方式，以实现安全免密推送。

1.  **生成SSH密钥对**（如果尚未生成）：

    在终端运行：

    ```bash
    ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
    ```

    连续回车使用默认路径和空密码（或设置密码）。

2.  **将公钥添加到GitHub**：

    -   复制公钥内容：`cat ~/.ssh/id_rsa.pub`
    -   登录GitHub → Settings → SSH and GPG Keys → New SSH Key → 粘贴公钥并保存。

3.  **测试连接**：

    ```bash
    ssh -T git@github.com
    ```

    看到 `Hi your-username! You've successfully authenticated...` 表示成功。

4.  **配置全局用户信息**（首次使用Git必需）：

    ```bash
    git config --global user.name "Your GitHub Username"
    git config --global user.email "your_email@example.com"
    ```

    此信息用于标识提交者。

# 4 将Git配置连接到Gitee

Gitee（码云）是国内常用的代码托管平台，连接步骤与GitHub类似。

1.  **生成SSH密钥**（如果尚未为Gitee生成）：
    步骤同上，若已为GitHub生成，可复用现有密钥，或为Gitee生成新密钥（如 `ssh-keygen -t rsa -b 4096 -C "your_email@example.com" -f ~/.ssh/id_rsa_gitee`）。
2.  **将公钥添加到Gitee**：
    -   复制公钥内容（如 `cat ~/.ssh/id_rsa_gitee.pub`）。
    -   登录Gitee → 个人设置 → SSH公钥 → 添加公钥。
3.  **测试连接**：
    ```bash
    ssh -T git@gitee.com
    ```
    看到 `Welcome to Gitee.com, your-username!` 表示成功。
4.  **（可选）配置特定于Gitee的用户信息**：
    若想为Gitee仓库使用与全局不同的用户信息，可在本地仓库目录下运行：
    ```bash
    git config user.name "Your Gitee Username"
    git config user.email "your_email@example.com"
    ```

# 5 通过Git Bash手动提交更改

手动提交是Git的核心工作流程，基本步骤如下：

1.  **初始化仓库**（若尚未初始化）：
    ```bash
    git init
    ```
2.  **检查状态**：
    ```bash
    git status
    ```
    查看有哪些文件被修改或未跟踪。
3.  **添加文件到暂存区**：
    ```bash
    git add <file_name>  # 添加特定文件
    git add .           # 添加所有更改
    ```
4.  **提交到本地仓库**：
    ```bash
    git commit -m "清晰描述本次提交的更改"
    ```
    提交信息应简明扼要。
5.  **推送到远程仓库**：
    ```bash
    git push -u origin main  # 首次推送，建立跟踪关系
    git push               # 后续推送
    ```
    若远程仓库为空，需先关联：
    ```bash
    git remote add origin git@github.com:your-username/your-repo.git  # 例如GitHub
    git remote add origin git@gitee.com:your-username/your-repo.git   # 例如Gitee
    ```
    使用 `git remote -v` 可查看当前关联的远程仓库。

# 6 配置通过Visual Studio Code自动提交

VS Code提供了强大的图形化Git操作界面，并可配置自动提交。

1.  **安装必要的扩展**：
    确保已安装VS Code的 **Git扩展**（通常默认安装）。
2.  **使用源代码管理视图**：
    -   点击侧边栏的“源代码管理”图标（或按 `Ctrl+Shift+G` / `Cmd+Shift+G`）。
    -   在“Changes”区域，可以看到所有更改的文件。
    -   点击文件旁的"+"或“Changes”上方的"+"可将文件暂存。
3.  **提交更改**：
    -   在消息框中输入提交信息。
    -   点击勾号（✓）或按 `Ctrl+Enter` / `Cmd+Enter` 提交。
4.  **配置自动提交**（根据需求选择）：
    -   打开VS Code设置（`Ctrl+,` / `Cmd+,`）。
    -   搜索“自动提交”相关设置，如：
        -   `Git: Auto Commit` 启用自动提交。
        -   `Git: Save Auto Commit` 设置在保存时自动提交。
        -   `Git: File Change Auto Commit` 设置在文件更改时自动提交。
5.  **推送更改**：
    提交后，点击源代码管理视图下方的“同步更改”或“推送”按钮，即可将本地提交推送到远程仓库。