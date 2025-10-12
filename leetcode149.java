class leetcode149 {
    public static int maxPoints(int[][] points) {
        int n = points.length;
        if (n <= 2) return n;

        int maxPoints = 0;

        for (int i = 0; i < n; i++) {
            int duplicates = 1;
            int verticals = 0;

            // Array to store slopes and their counts
            double[] slopes = new double[n]; 
            int[] counts = new int[n];
            int slopesIndex = 0;

            for (int j = i + 1; j < n; j++) {
                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];

                if (dx == 0 && dy == 0) { // duplicate point
                    duplicates++;
                    continue;
                }

                if (dx == 0) { // vertical line
                    verticals++;
                    continue;
                }

                double slope = (double) dy / dx;

                boolean found = false;
                for (int k = 0; k < slopesIndex; k++) {
                    if (slopes[k] == slope) {
                        counts[k]++;
                        found = true;
                        break;
                    }
                }

                if (!found) { // new slope
                    slopes[slopesIndex] = slope;
                    counts[slopesIndex] = 1;
                    slopesIndex++;
                }
            }

            int currentMax = verticals;
            for (int k = 0; k < slopesIndex; k++) {
                currentMax = Math.max(currentMax, counts[k]);
            }

            maxPoints = Math.max(maxPoints, currentMax + duplicates);
        }

        return maxPoints;
    }

    public static void main(String[] args) {
        int [][]points={{1,1},{2,2,},{3,3}};
        System.out.println(maxPoints(points));
    }
}