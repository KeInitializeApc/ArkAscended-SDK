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

// 0x8 (0x8 - 0x0)
// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetupBedIcon
struct UBedSpawnWidget_ASA_C_SetupBedIcon_Params
{
public:
	class UTexture2D*                            BedIcon;                                           // 0x0(0x8)(Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x34 (0x34 - 0x0)
// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Get_Image_DefaultDestination_ColorAndOpacity
struct UBedSpawnWidget_ASA_C_Get_Image_DefaultDestination_ColorAndOpacity_Params
{
public:
	struct FLinearColor                          ReturnValue;                                       // 0x0(0x10)(Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x10(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
	uint8                                        Pad_37AA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x18(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	float                                        CallFunc_MakeColor_A_ImplicitCast;                 // 0x30(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetSelected
struct UBedSpawnWidget_ASA_C_SetSelected_Params
{
public:
	bool                                         Selected;                                          // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x41 (0x41 - 0x0)
// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetupBed
struct UBedSpawnWidget_ASA_C_SetupBed_Params
{
public:
	int32                                        SpawnPointID;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37AD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       NextAllowedUseTime;                                // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowedUse;                                       // 0x10(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37AE[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Location;                                          // 0x18(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FString                                BedName;                                           // 0x30(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsDefaultDest;                                    // 0x40(0x1)(ConstParm, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.SetQuantityBeds
struct UBedSpawnWidget_ASA_C_SetQuantityBeds_Params
{
public:
	int32                                        Quantity;                                          // 0x0(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA9 (0xA9 - 0x0)
// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.ExecuteUbergraph_BedSpawnWidget_ASA
struct UBedSpawnWidget_ASA_C_ExecuteUbergraph_BedSpawnWidget_ASA_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         K2Node_CustomEvent_Selected;                       // 0x5(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_37BF[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_Event_SpawnPointID;                         // 0x8(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_37C0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       K2Node_Event_NextAllowedUseTime;                   // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         K2Node_Event_bAllowedUse;                          // 0x18(0x1)(ConstParm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_37C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_Event_Location;                             // 0x20(0x18)(Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                K2Node_Event_BedName;                              // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         K2Node_Event_bIsDefaultDest;                       // 0x48(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_37C5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        K2Node_CustomEvent_Quantity;                       // 0x4C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x50(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
	uint8                                        Pad_37C6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x58(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue;                  // 0x70(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FLinearColor                          CallFunc_SelectColor_ReturnValue_1;                // 0x80(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
	bool                                         Temp_bool_Has_Been_Initd_Variable_1;               // 0x90(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x91(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37C7[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x98(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0xA0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Temp_bool_IsClosed_Variable_1;                     // 0xA8(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
};

// 0x8 (0x8 - 0x0)
// Function BedSpawnWidget_ASA.BedSpawnWidget_ASA_C.Clicked__DelegateSignature
struct UBedSpawnWidget_ASA_C_Clicked__DelegateSignature_Params
{
public:
	class UBedSpawnWidget_ASA_C*                 BedSpawn;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
};

}
}


