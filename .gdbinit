skip -gfi /usr/include/c++/*/*/*
skip -gfi /usr/include/c++/*/*
skip -gfi /usr/include/c++/*
python
import sys
sys.path.insert(0, '/home/kyrylo/Repositories/eigen_printers/gdb')
from printers import register_eigen_printers
register_eigen_printers(None)
end
