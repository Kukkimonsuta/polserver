#ifndef POLSERVER_VARIABLESCOPE_H
#define POLSERVER_VARIABLESCOPE_H

namespace Pol::Bscript::Compiler
{
enum class VariableScope
{
  Local,
  Global,
  Capture
};

}  // namespace Pol::Bscript::Compiler

#endif  // POLSERVER_VARIABLESCOPE_H
