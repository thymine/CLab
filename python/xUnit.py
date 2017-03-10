class TestCase:
    def __init__(self, name):
        self.name = name
        self.wasSetUp = None

    def run(self):
        exec "self." + self.name + "()"


class WasRun(TestCase):
    def __init__(self, name):
        self.wasRun = None
        TestCase.__init__(self, name)

    def testMethod(self):
        self.wasRun = 1


# test = WasRun("testMethod")
# print test.wasRun
# test.run()
# print test.wasRun


class TestCaseTest(TestCase):
    def testRunning(self):
        test = WasRun("testMethod")
        assert (not test.wasRun)
        test.run()
        assert (test.wasRun)


TestCaseTest("testRunning").run()
