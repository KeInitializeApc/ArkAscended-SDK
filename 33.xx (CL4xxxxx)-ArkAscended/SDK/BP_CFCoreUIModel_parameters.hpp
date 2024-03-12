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

// 0x41 (0x41 - 0x0)
// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived
struct UBP_CFCoreUIModel_C_OnEventReceived_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3BC9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCFCoreMod>                    InModsList;                                        // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3BCB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_OnEventReceived_OutModsList;              // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_OnEventReceived_ReturnValue;              // 0x40(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

// 0x71 (0x71 - 0x0)
// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived_LibraryProgress
struct UBP_CFCoreUIModel_C_OnEventReceived_LibraryProgress_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3BD6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLibraryProgress                      Progress;                                          // 0x8(0x40)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_3BD7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_OnEventReceived_LibraryProgress_OutModsList; // 0x60(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_OnEventReceived_LibraryProgress_ReturnValue; // 0x70(0x1)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
};

}
}


