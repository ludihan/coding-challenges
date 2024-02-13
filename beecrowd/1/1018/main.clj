(defn divide-cedulas [total cedulas]
      (if (not= (count cedulas) 0)
        (do
          (def c (first cedulas))
          (printf "%d nota(s) de R$ %d,00\n" (quot total c) c)
          (divide-cedulas (rem total c) (subvec cedulas 1)))))

(divide-cedulas (read) [100 50 20 10 5 2 1])
