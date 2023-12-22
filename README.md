# NVIDIAイメージを使ったPyTorch環境

コンテナの起動
```
    # ビルド
    bash docker.sh build
    # 非rootユーザーとして起動
    bash docker.sh shell
    # rootとして起動
    bash docker.sh root
```

VSCodeにアタッチ

![](docs/img/docker_nvidia_practice-2.png)

環境の確認
```
    python src/check.py
```

## 備考
`.devcontainer/`は飾り