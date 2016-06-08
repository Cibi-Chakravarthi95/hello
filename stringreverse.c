def reverse(text):
    r_text = ''
    index = len(text) - 1

    while index >= 0:
        r_text += text[index] #string canbe concatenated
        index -= 1

    return r_text

print reverse("hello, world!")
