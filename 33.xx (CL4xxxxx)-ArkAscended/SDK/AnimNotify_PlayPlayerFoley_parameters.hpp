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
// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.SelectSound
struct UAnimNotify_PlayPlayerFoley_C_SelectSound_Params
{
public:
	class UPDA_FoleyCollection_C*                FolleyColletion;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class USoundBase*                            FoleySoundReferance;                               // 0x8(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	enum class Enum_FoleyCollection              Temp_byte_Variable;                                // 0x10(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_31CB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            K2Node_Select_Default;                             // 0x18(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.GetNotifyName
struct UAnimNotify_PlayPlayerFoley_C_GetNotifyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0xA4 (0xA4 - 0x0)
// Function AnimNotify_PlayPlayerFoley.AnimNotify_PlayPlayerFoley_C.Received_Notify
struct UAnimNotify_PlayPlayerFoley_C_Received_Notify_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x38(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_31DC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            FoleySound;                                        // 0x40(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UPDA_FoleyCollection_C*                Default_Collection;                                // 0x48(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x50(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class USoundBase*                            CallFunc_SelectSound_FoleySoundReferance;          // 0x58(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x68(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_31E5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalInventoryComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x70(0x8)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UPrimalItem*                           CallFunc_GetEquippedItemOfType_ReturnValue;        // 0x78(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	class UPrimalItemArmorGeneric_C*             K2Node_DynamicCast_AsPrimal_Item_Armor_Generic;    // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x88(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	uint8                                        Pad_31E9[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x90(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class USoundBase*                            CallFunc_SelectSound_FoleySoundReferance_1;        // 0x98(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast; // 0xA0(0x4)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
};

}
}


