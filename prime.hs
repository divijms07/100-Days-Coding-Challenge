main = putStrLn "Hello, World!"
factors :: Int -> [Int]
factors n = [x | x <- [1..n], n `mod` x == 0]
prime :: Int -> Bool
prime n = factors n == [1,n]
primes :: Int -> [Int]
primes n = [x | x <- [2..n], prime x]
scalarproduct :: [Int] -> [Int] -> Int
scalarproduct xs ys = sum [x*y | (x,y) <- zip xs ys]
