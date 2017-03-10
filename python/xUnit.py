class TestCase:
    def __init__(self, name):
        self.name = name

    def setUp(self):
        pass

    def run(self):
        self.setUp()
        exec "self." + self.name + "()"


class WasRun(TestCase):
    def __init__(self, name):
        self.wasRun = None
        self.wasSetUp = None
        TestCase.__init__(self, name)

    def setUp(self):
        self.wasSetUp = 1

    def testMethod(self):
        self.wasRun = 1


# test = WasRun("testMethod")
# print test.wasRun
# test.run()
# print test.wasRun


class TestCaseTest(TestCase):
    def setUp(self):
        self.test = WasRun("testMethod")

    def testRunning(self):
        self.test.run()
        assert (self.test.wasRun)

    def testSetUp(self):
        self.test.run()
        assert (self.test.wasSetUp)


TestCaseTest("testRunning").run()
TestCaseTest("testSetUp").run()
