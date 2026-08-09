##### Purpose
- Collects snapshots (commits) of your source code directory at different times
	- Modified files not on the stage will not be included in the snapshot
- Allows for easy cooperation and coordination in a team working on the same codebase
##### Some terms
- Clone - Make a copy of a remote repo locally
- Working tree 
	- The directory you go into to edit and change files of the project
	- Created when you clone
	- clean
		- there are no uncommitted changes or untracked files in your git repository
		- local files match the latest commit in the repository
- Stage
	- Place you add the changes to include in the next commit
	- You can choose which files to add here, regardless of whether they were changed
- Branch
	- a reference to a certain commit that's been made
		- like a post it note attached to that commit
- Origin
	- alias for remote repository we originally cloned from
- Commit
	- committing or snapshoting the changes introduced in the stage
	- signature 
		- verify authenticity of commits, ensuring changes come from a trusted source
##### Setting Git defaults locally
```bash
git config set --global user.name "Your Name"
git config set --global user.email "your-email@example.com"
git config set --global init.defaultBranch main
```
##### The `.git` directory
	- The directory where git keeps all its metadata and commits
##### The `.gitignore` file
- To ignore a directory, add the path with a trailing slash
```.gitignore
.obsidian/
```
##### Git diff command
```bash
git diff
```
- shows changes that aren't yet staged
- Color coding (if included in terminal)
	- Green or a `+`  on it's own - added lines
	- Red or a `-` on it's own - deleted lines
	- Green and red together above and below - changed lines
- `git diff --staged` shows the changes that are staged
##### `git add .` command
- stages all new and modified files in curr dir and subdirs for next commit
##### Status Messages
- `ahead of 'origin/main' by 1 commit` 
	- local commit history on main branch has one commit that the remote commit history on its main branch doesn't have
##### `git log`
- tracks the commits made to repository
	- top of output lists most recent commit entry
	- commit id
		- large hex number which is used to identify a particular commit
