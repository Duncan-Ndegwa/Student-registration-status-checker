def check_registration():
    print("=" * 45)
    print("   STUDENT REGISTRATION STATUS CHECKER")
    print("=" * 45)

    name = input("\nEnter student name: ").strip()
    units = int(input("Enter number of registered units: "))

    if units > 7:
        status = "Overload - Approval Required"
    else:
        status = "Registration Accepted"

    print("\n" + "=" * 45)
    print("           REGISTRATION SUMMARY")
    print("=" * 45)
    print(f"  Student Name : {name}")
    print(f"  Units        : {units}")
    print(f"  Status       : {status}")
    print("=" * 45)

if __name__ == "__main__":
    check_registration()

