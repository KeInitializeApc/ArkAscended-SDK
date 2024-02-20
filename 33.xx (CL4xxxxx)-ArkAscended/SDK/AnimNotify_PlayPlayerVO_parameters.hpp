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

// 0x30 (0x30 - 0x0)
// Function AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C.GetNotifyName
struct UAnimNotify_PlayPlayerVO_C_GetNotifyName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// Function AnimNotify_PlayPlayerVO.AnimNotify_PlayPlayerVO_C.Received_Notify
struct UAnimNotify_PlayPlayerVO_C_Received_Notify_Params
{
public:
	class USkeletalMeshComponent*                MeshComp;                                          // 0x0(0x8)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequenceBase*                     Animation;                                         // 0x8(0x8)(ConstParm, ExportObject, ReturnParm, Config, EditConst)
	struct FAnimNotifyEventReference             EventReference;                                    // 0x10(0x28)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         ReturnValue;                                       // 0x38(0x1)(BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_31EF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPDA_VoiceCollection_C*                VoiceCollection;                                   // 0x40(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, Config, SubobjectReference)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
	class APlayerPawnTest_C*                     K2Node_DynamicCast_AsPlayer_Pawn_Test;             // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_31F1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UPDA_VoiceCollection_C*                K2Node_DynamicCast_AsPDA_Voice_Collection;         // 0x60(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Config, SubobjectReference)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x68(0x1)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
	enum class Enum_VoiceCollectionLine          Temp_byte_Variable;                                // 0x69(0x1)(ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
	uint8                                        Pad_31FA[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            K2Node_Select_Default;                             // 0x70(0x8)(ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x78(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
};

}
}


