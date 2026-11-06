# Assignment 3 - Hexadecimal Viewer

**Student:** Eng. Dhafer Alyaari  
**Language:** C

## English

This program reads a file and displays its contents in hexadecimal (Hex) and ASCII.
It reads 16 bytes at a time. Characters that cannot be printed are displayed as `.`.
It can be used to view file headers and file signatures.

**Files:**
- `hex_viewer.c` — C source code.
- `hex_viewer.exe` — Windows 64-bit executable.
- `test.txt` — Sample file for testing.
- `Run_Test.bat` — Runs the sample on Windows.

**How to run (Windows):**

Double-click `Run_Test.bat` to see a test, or open Command Prompt in this folder and enter:

```cmd
hex_viewer.exe test.txt
```

To check another file, replace `test.txt` with its file name or path.
If the file cannot be opened, the program shows an error message.

## العربية

**التكليف الثالث: عارض الملفات بصيغة الهكس (Hexadecimal Viewer)**  
**الطالب:** Eng. Dhafer Alyaari

برنامج بلغة C لقراءة أي ملف وعرض محتوياته بصيغة **Hex** وبجانبها الأحرف بصيغة **ASCII**.
يقرأ البرنامج **16 بايت** في كل مرة، ويستبدل الأحرف غير القابلة للطباعة بنقطة (`.`).
يمكن استخدامه لفحص بداية الملفات والتعرّف على تواقيعها.

**طريقة التجربة على ويندوز:**

افتح `Run_Test.bat` لتشغيل المثال، أو افتح موجه الأوامر داخل المجلد واكتب:

```cmd
hex_viewer.exe test.txt
```

لفحص ملف آخر، ضع اسمه أو مساره بدل `test.txt`. إذا لم يتم العثور على الملف، تظهر رسالة خطأ.
