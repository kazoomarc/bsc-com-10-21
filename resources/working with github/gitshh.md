#Git shhh

## Cloning a repo

```bash
git clone https://github.com/kazoomarc/mdl.git
```

## repo with stuff offline to empty repo online

```bash
git init
git add .
git commit -m "Initial commit"
```

create the online repo then add the code to it like this

```BASH
git remote add origin https://github.com/kazoomarc/jssh.git
git push -u origin main
```

## Made a repo with stuff online and connect to offline repo with stuff

```bash
git init
git remote add origin https://github.com/kazoomarc/mdl.git
git fetch
echo "hello">new.txt
git add .
git commit -m "Initial commit"
git branch --set-upstream-to=origin/main
git pull origin main --allow-unrelated-histories
```
