#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function BPI_CustomComboBoxInterface.BPI_CustomComboBoxInterface_C.OnOptionSelectedInterface
struct IBPI_CustomComboBoxInterface_C_OnOptionSelectedInterface_Params
{
public:
	class FString                                Option;                                            // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	int64                                        ID;                                                // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class UUI_CustomComboBoxOption_C*            OptionWidget;                                      // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}
}


