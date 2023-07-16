class Solution:
    def simplifyPath(self, paths: str) -> str:
        l = []
        for path in paths.split('/'):
            print(len(path))
            if path=='..':
                if len(l):
                    l.pop()
            elif len(path) and path!='.':
                l.append(path)
       # print(paths.split('/'))
        return '/'+'/'.join(l)
