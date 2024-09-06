using namespace System;

public class ZhestkiiDisk
{
	private:
		int sistema[20][67];
	public:
		void setDisk ()
		{
			for(int i=0;i<=19;i++)
			{
				for(int j=0;j<=66;j++)
				{
					sistema[i][j]=rand()%5;
				}
			}
		}
		int getDisk (int a1,int b1)
		{
			return sistema[a1][b1];
		}
		
		void Defrag ()
		{
			int s;
			for(int i=0;i<=19;i++)
			{
				for(int j=0;j<=66;j++)
				{
					for(int k=0;k<=19;k++)
					{
						for(int f=0;f<=66;f++)
						{
							if (sistema[i][j]>sistema[k][f])
							{
								s=sistema[i][j];
								sistema[i][j]=sistema[k][f];
								sistema[k][f]=s;
							}
						}
					}
				}
			}
		}
		
};