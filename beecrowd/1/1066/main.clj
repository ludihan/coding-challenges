(let [lista (repeatedly 5 read)]
  (print (str
    (count (filter even? lista)) " valor(es) par(es)\n"
    (count (filter odd? lista))  " valor(es) impar(es)\n"
    (count (filter pos? lista))  " valor(es) positivo(s)\n"
    (count (filter neg? lista))  " valor(es) negativo(s)\n")))
