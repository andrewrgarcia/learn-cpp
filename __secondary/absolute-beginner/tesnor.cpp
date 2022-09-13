#include <torch/torch.h>
#include <iostream>
torch::Tensor t = torch::randn({ 2, 3, 4 });

float* ptr = (float*)t.data_ptr();
	
// iterate by each dimension
for (int z = 0; z < t.sizes()[0]; ++z)
{
	for (int y = 0; y < t.sizes()[1]; ++y)
	{
		for (int x = 0; x < t.sizes()[2]; ++x)
		{
			printf("Element at [%d %d %d]: %f\n", x, y, z, *ptr++);
		}
	}
}

ptr = (float*)t.data_ptr();

// iterate through all elements
for (int i = 0; i < t.numel(); ++i)
{
	printf("%dth Element: %f\n", i, *ptr++);
}
