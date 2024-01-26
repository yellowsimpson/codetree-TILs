'''
class <클래스 이름>:
    def __init__(self, <Arguments>...(재료들)) <-- 생성자 (Constructor)
        Object 생성

붕어빵 = <클래스이름>(재료들)
'''

class spy:
    def __init__(self, secret_code, meeting_point, time):
        self.secret_code = secret_code
        self.meeting_point = meeting_point
        self.time = time

s_code, m_point,time = tuple(input().split())

s = spy(s_code, m_point, int(time))

print(f"secret code : {s.secret_code}")
print(f"meeting point : {s.meeting_point}")
print(f"time : {s.time}")