class Student :
    
    def __init__(self, name_typed, major_typed, cgpa_typed, is_on_probation_typed):
        self.name = name_typed
        self.major = major_typed
        self.cgpa = cgpa_typed
        self.is_on_probation = is_on_probation_typed

    def on_honor_roll(self):
        if self.cgpa >= 3.5:
            return True
        else:
            return False

