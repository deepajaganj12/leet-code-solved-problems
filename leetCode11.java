public class leetCode11 {
    public static int maxArea(int[] height) {
        int maxArea = 0;
        int i = 0, j = height.length - 1;

        while (i < j) {
            int currArea = Math.min(height[i], height[j]) * (j - i);
            maxArea = Math.max(maxArea, currArea);

            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
    }
    public static void main(String[] args) {
        int height[]={2,3,4,5,6,2,3};
        System.out.println(maxArea(height));
    }
}
