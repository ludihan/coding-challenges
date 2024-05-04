(defn experiencias [n]
  (let [ input (group-by #(second %) (repeatedly n #(vector (read) (read))))
         coelhos (reduce + (map #(first %) ('C input)))
         ratos   (reduce + (map #(first %) ('R input)))
         sapos   (reduce + (map #(first %) ('S input)))
         total   (reduce + [coelhos ratos sapos]) ]
    (printf (str "Total: %d cobaias\n"
                 "Total de coelhos: %d\n"
                 "Total de ratos: %d\n"
                 "Total de sapos: %d\n"
                 "Percentual de coelhos: %.2f %%\n"
                 "Percentual de ratos: %.2f %%\n"
                 "Percentual de sapos: %.2f %%\n"
                 )
            total
            coelhos
            ratos
            sapos
            (* 100 (float (/ coelhos total)))
            (* 100 (float (/ ratos total)))
            (* 100 (float (/ sapos total))))))

(experiencias (read))
