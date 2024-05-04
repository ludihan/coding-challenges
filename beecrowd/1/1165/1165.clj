(defn eh-primo [num]
  (if (= 0 (count
             (filter #(= (mod num %) 0)
                     (range 2 num))))
    (str num " eh primo")
    (str num " nao eh primo")))

(dorun (repeatedly (read) #(println (eh-primo (read)))))
