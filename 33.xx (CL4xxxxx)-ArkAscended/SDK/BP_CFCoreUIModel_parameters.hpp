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
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_34F[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCFCoreMod>                    InModsList;                                        // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x18(0x10)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_350[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_OnEventReceived_OutModsList;              // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_OnEventReceived_ReturnValue;              // 0x40(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x71 (0x71 - 0x0)
// Function BP_CFCoreUIModel.BP_CFCoreUIModel_C.OnEventReceived_LibraryProgress
struct UBP_CFCoreUIModel_C_OnEventReceived_LibraryProgress_Params
{
public:
	enum class EGameModsEvent                    Evt;                                               // 0x0(0x1)(Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_354[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	struct FLibraryProgress                      Progress;                                          // 0x8(0x40)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	TArray<struct FInstallProgressMod>           OutModsList;                                       // 0x48(0x10)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_355[0x7];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FInstallProgressMod>           CallFunc_OnEventReceived_LibraryProgress_OutModsList; // 0x60(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         CallFunc_OnEventReceived_LibraryProgress_ReturnValue; // 0x70(0x1)(BlueprintVisible, ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}
}


