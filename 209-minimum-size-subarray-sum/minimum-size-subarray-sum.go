package main

import "math"

func minSubArrayLen(target int, nums []int) int {
	n := len(nums)
	left := 0
	sum := 0
	minLen := math.MaxInt

	for right := 0; right < n; right++ {
		sum += nums[right]

		for sum >= target {
			length := right - left + 1
			if length < minLen {
				minLen = length
			}

			sum -= nums[left]
			left++
		}
	}

	if minLen == math.MaxInt {
		return 0
	}

	return minLen
}