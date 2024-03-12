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

// 0x19 (0x19 - 0x0)
// Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.ExtraSetupWidget
struct UDataListButtonHairLength_Widget_ASA_C_ExtraSetupWidget_Params
{
public:
	class UPrimalUserWidget*                     UserWidget;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
	int32                                        Index;                                             // 0x8(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	int32                                        CallFunc_GetQuantityMeshes_ReturnValue;            // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class USliderClamp_Widget_C*                 K2Node_DynamicCast_AsSlider_Clamp_Widget;          // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
};

// 0x2C (0x2C - 0x0)
// Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.GetQuantityMeshes
struct UDataListButtonHairLength_Widget_ASA_C_GetQuantityMeshes_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_563E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHairStyleDefinition>          DefinitionsLocal;                                  // 0x8(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UPrimalGameData*                       CallFunc_BPGetGameData_ReturnValue;                // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x24(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
	int32                                        CallFunc_SelectInt_ReturnValue;                    // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.SetupTextValue
struct UDataListButtonHairLength_Widget_ASA_C_SetupTextValue_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	class FText                                  ReturnText;                                        // 0x18(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FHairStyleDefinition>          DefinitionsLocal;                                  // 0x30(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	int32                                        CallFunc_GetQuantityMeshes_ReturnValue;            // 0x40(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5640[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_SetupTextValue_ReturnText;                // 0x48(0x18)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

// 0x5 (0x5 - 0x0)
// Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.RefreshHairData
struct UDataListButtonHairLength_Widget_ASA_C_RefreshHairData_Params
{
public:
	int32                                        HairIndex;                                         // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         IsFemale;                                          // 0x4(0x1)(ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.ExecuteUbergraph_DataListButtonHairLength_Widget_ASA
struct UDataListButtonHairLength_Widget_ASA_C_ExecuteUbergraph_DataListButtonHairLength_Widget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	int32                                        K2Node_CustomEvent_HairIndex;                      // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         K2Node_CustomEvent_IsFemale;                       // 0x8(0x1)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_5643[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class USliderClamp_Widget_C*                 K2Node_DynamicCast_AsSlider_Clamp_Widget;          // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
	uint8                                        Pad_5644[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CallFunc_GetQuantityMeshes_ReturnValue;            // 0x24(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FText                                  CallFunc_SetupTextValue_ReturnText;                // 0x28(0x18)(Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
};

}
}


