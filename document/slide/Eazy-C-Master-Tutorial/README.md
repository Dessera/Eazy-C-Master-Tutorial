# ECMT C语言速通教程

吉林大学无线电爱好者协会2024C语言速通课程，为单片机培训服务。

## 路径说明

### 仓库文件

- `README.md`：本文件
- `LICENSE`：MIT 开源协议
- `.gitignore`：Git 忽略文件

### 内容文件

- `dist`：导出文件
- `snippets`：代码片段（练习答案）
  - `XX`：第 XX 章节的代码片段
    - `XXX-name.c/cpp`：练习代码
- `public`：资源文件夹
- `pages`：课程页面
- `slides.md`：课程PPT入口

### 配置文件

- `.npmrc`：NPM 配置文件
- `.yarnrc.yml`：Yarn 配置文件
- `netlify.toml`：Netlify 配置文件
- `vercel.json`：Vercel 配置文件
- `package.json`：NPM 包管理文件
- `.node-version`：Node.js 版本文件

## 使用

因为工程用`md`文档可读性较差，因此我们会在`Releases`中发布包含PDF文档、HTML导出和练习代码的压缩包。

## 部署工程

要部署本工程，你需要安装 Node.js 和 Yarn，确保你的 Node.js 版本与`.node-version`文件中的版本一致。

```bash

# 安装依赖
yarn

# 启动本地服务器
yarn run dev

# 构建静态文件
yarn run build

# 导出PDF
yarn run export

```

更多构建细节请参考[Slidev导出](https://cn.sli.dev/guide/exporting.html)和[Slidev部署](https://cn.sli.dev/guide/hosting.html)。
