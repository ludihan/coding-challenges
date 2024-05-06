(defn josephus
  ([n]
    (let [qtd (first n)
          passos (second n)]
      (josephus qtd passos 1 -1)))
  ([n k s t]
    (if (> s n)
      t
      (recur n k (inc s) (cond (= t -1)
                            (mod (+ s k) s)
                            :else
                            (mod (+ t k) s))))))

(defn print-results
  ([n]
    (print-results n 0 (count n)))
  ([n s e]
    (if (= s e)
      nil
      (do
        (printf "Case %d: %d\n" (inc s) (inc (nth n s)))
        (recur n (inc s) e)))))

(def qtd-casos (read))
(def valores-dos-casos (repeatedly qtd-casos #(repeatedly 2 read)))
(def respostas-dos-casos (map josephus valores-dos-casos))
(print-results respostas-dos-casos)
