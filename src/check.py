import torch

print(f"gpu available: {torch.cuda.is_available()}")
print(f"device name: {torch.cuda.get_device_name()}")
