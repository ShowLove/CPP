import copyFiles

class MakeCompilable(object):

  def __init__(self):
    self.printDebug  = True
    self.cf = copyFiles.copyFiles() #import.class
    self.className =  self.cf.getClassName()
    self.nameSpace  = self.cf.getNameSpace()
    self.headerFile, self.SrcFile, self.TestFile = self.cf.getDstDirs()
    self.origClassName = "Foo"
    self.origNameSpace = "fooNameSpace"
    self.newFuncName   = "revStr"

  def replaceStrInFile(self, fullPathFName, origStr, replaceStr):
    # Read in the file
    with open(fullPathFName, 'r') as file :
      filedata = file.read()
    # Replace the target string
    filedata = filedata.replace(origStr, replaceStr)
    # Write the file out again
    with open(fullPathFName, 'w') as file:
      file.write(filedata)

  def updateHeaderClassName(self):
    if self.printDebug : print("\nIn: " + self.headerFile + "\nupdated " + self.origClassName + " to " + self.className)
    self.replaceStrInFile(self.headerFile, self.origClassName, self.className)

  def updateSourceClassName(self):
    if self.printDebug : print("\nIn: " + self.SrcFile + "\nupdated " + self.origClassName + " to " + self.className)
    self.replaceStrInFile(self.SrcFile, self.origClassName, self.className)

  def updateTestClassName(self):
    if self.printDebug : print("\nIn: " + self.TestFile + "\nupdated " + self.origClassName + " to " + self.className)
    self.replaceStrInFile(self.TestFile, self.origClassName, self.className)

  def updateNameSpace(self):
    if self.printDebug : print("\nUdating namespace: " + self.origNameSpace + " to " + self.nameSpace)
    self.replaceStrInFile(self.headerFile, self.origNameSpace, self.nameSpace)
    self.replaceStrInFile(self.SrcFile, self.origNameSpace, self.nameSpace)
    self.replaceStrInFile(self.TestFile, self.origNameSpace, self.nameSpace)

  # This is the main function to be called by other classes
  def makeClassCompilable():
    self.updateHeaderClassName()
    self.updateSourceClassName()
    self.updateTestClassName()
    self.updateNameSpace()


###################################
# Run the code
##################################
#obj = MakeCompilable()
#obj.updateHeaderClassName()
#obj.updateSourceClassName()
#obj.updateTestClassName()
#obj.updateNameSpace()





