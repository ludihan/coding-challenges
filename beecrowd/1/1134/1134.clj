(defn combustivel
  ([]
   (combustivel (read) []))
  ([num col]
   (if (some #(= num %) [1 2 3 4])
     (if (= num 4)
       (let [final (group-by (fn [x] x) col)]
         [ (count (get final 1))
           (count (get final 2))
           (count (get final 3)) ])
       (recur (read) (conj col num)))
     (recur (read) col))))

(defn print-combustivel [comb]
  (printf (str "MUITO OBRIGADO\n"
               "Alcool: %d\n"
               "Gasolina: %d\n"
               "Diesel: %d\n")
          (get comb 0 0)
          (get comb 1 0)
          (get comb 2 0)))

(print-combustivel (combustivel))
