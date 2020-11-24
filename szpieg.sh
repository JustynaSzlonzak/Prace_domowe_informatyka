#!/bin/bash

dalej="t"

while [ "$dalej" = "t" ]
do

clear

echo "Wpisz nazwe uzytkownika"
read uzytkownik

if [ "$(users | grep "$uzytkownik")" != "" ]
then

echo "Podaj adres e-mail, na ktory chcesz wyslac
wiadomosc"
read adres e-mail
e-mail="$adres"
echo "$uzytkownik zalogowany" | mutt -s "$uzytkownik zalogowany" $email

echo "wiadomosc wyslana"

else

echo "wprowadz adres e-mail, na ktory chcesz wyslac wiadomosc"
read adres
e-mail="$adres"
echo "uzytkoenik niezalogowany" | mutt -s "uzytkownik niezalogowany" $email

echo "wiadomosc wyslana"

fi
echo "Czy chcesz kontynuowac?"
read dalej
done
