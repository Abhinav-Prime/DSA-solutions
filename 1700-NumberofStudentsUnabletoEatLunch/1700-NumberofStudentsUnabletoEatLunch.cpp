        }
            }
        for(int j:sandwiches)
        {
            if(j==0 && c==0)
            return s;
            if(j==1 && s==0)
            {
                return c;
            }
            if(j==0)
            {
                c--;
            }
            else
            s--;
        }
    }
        return 0;
};
[
