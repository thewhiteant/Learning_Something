from tinydb import TinyDB, Query
import os

bookDB = TinyDB('Books.json',indent=4)
MemberDB = TinyDB('Members.json',indent=4)
q = Query()

# db.insert({'type': 'apple', 'count': 7})


# testDB.insert({'type': 'pk', 'count': 9})



# # data = testDB.search(q.type == "pk")


# books control
def addBook_option():

    

    bname = input("Book-Name: ")
    AuthName = input("Author-Name: ")
    rprice = input("Reguler-Price: ")
    btype = input("Book Type: ")
    qntt = input("Book Quantities: ")
    os.system("cls")
    add_book(bname, AuthName, rprice, btype,qntt)


def add_book(name, auth, price, type,qq):
    book = bookDB.search(q.name == name)
    if(not book):
        bookDB.insert({"name":name,"auth":auth,"price":price,"type":type,"qntt":qq})

    else:
        print("Already Ase")



def remove_book(name,vaxCrypt):
    book = bookDB.search(q.name == name)
    if(book and vaxCrypt=="12345"):
        bookDB.remove(q.name==name)


def show_all_book():
    all_data = bookDB.all()

    for i in range(len(all_data)):
        print(f"{i+1}. {all_data[i]['name']} -->price: {all_data[i]['price']} --->Qn: {all_data[i]['qntt']} ")

    print("\n\n\n\n\n\n")

def Book_section():
    while True:
         print("1.All books properties \n2.Add Books\n3.Remove Book\n4.Back\nChose: ",end="")
         en = int(input())
         if(en == 1):
            os.system("cls")
            show_all_book()
         elif(en == 2):
            os.system("cls")
            asp = int(input("How many: "))
            for i in range(asp):    
                addBook_option()
         elif(en==3):
            os.system("cls")
            rb = input("Book-Name: ")
            remove_book(rb, "12345")

         else:
            os.system("cls")
            break;
           
        




# system controlc



def get_id():
    pass


def total_money():
    pass


# member control


def mem_section():
    while True:
         print("1.All Members \n2.Add Members\n3.Remove Members\n4.Back\nChose: ",end="")
         en = int(input())
         if(en == 1):
            os.system("cls")
         elif(en == 2):
            os.system("cls")
            asp = int(input("How many: "))
            for i in range(asp):    
                add_member()
         elif(en==3):
            os.system("cls")
            rb = input("Book-Name: ")
            remove_member(rb, "12345")

         else:
            os.system("cls")
            break;
           
       

def add_member():
    name = input("Name: ")
    add = input("Address: ")
    while True:
        phone = input("phone number :+880 ")
        if len(phone) == 10:
             break
    bq = input("Have any book: ")
    os.system("cls")
    add_mem_db(name, add, phone, bq)


def add_mem_db(name,add,phn,hB):
    mem = MemberDB.search(q.name == name)
    if(not mem):
        MemberDB.insert({"name":name,"address":add,"phone":phn,"haveB":hB,"total":0,"fav":"none"})



def remove_member(name,vaxCrypt):
    mem = MemberDB.search(q.name == name)
    if(mem and vaxCrypt=="12345"):
        MemberDB.remove(q.name==name)



def show_all_mem():
    all_data = MemberDB.all()

    for i in range(len(all_data)):
        print(f"{i+1}. {all_data[i]['name']} -->Book Have: {all_data[i]['haveB']} --->Qn: {all_data[i]['fav']} ")

    print("\n\n\n\n\n\n")




def main(data):
    while (True):

        print("Librery Management Project\n1.Book Section\n2.Member Section\nChosse:",
              end="")
        n = int(input())
        if(n == 1):
            os.system("cls")
            Book_section()
        elif(n == 2):
            os.system("cls")
            mem_section()
        else:
            os.system("cls")
            break;
            
        

if __name__ == '__main__':
    data = ""
    os.system("cls")
    main(data)

