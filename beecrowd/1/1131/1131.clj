(defn grenais
  ([]
   (grenais 0 0 0))

  ([i g e]
   (let [pi (read)
         pg (read)]

     (println "Novo grenal (1-sim 2-nao)")

     (if (= (read) 2)
       (let [i (if (> pi pg) (inc i) i)
             g (if (< pi pg) (inc g) g)
             e (if (= pi pg) (inc e) e)]

         (printf (str "%d grenais\n"
                      "Inter:%d\n"
                      "Gremio:%d\n"
                      "Empates:%d\n")
                 (+ i g e) i g e)
         (cond
           (> i g) (println "Inter venceu mais")
           (< i g) (println "Gremio venceu mais")
           (= i g) (println "Nao houve vencedor")))
       (cond
         (> pi pg ) (recur (inc i) g e)
         (< pi pg ) (recur i (inc g) e)
         (= pi pg ) (recur i g (inc e)))))))

(grenais)
