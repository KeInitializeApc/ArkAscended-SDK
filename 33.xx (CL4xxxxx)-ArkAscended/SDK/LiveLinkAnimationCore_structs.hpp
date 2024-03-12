#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x48 - 0x10)
// ScriptStruct LiveLinkAnimationCore.AnimNode_LiveLinkPose
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLiveLinkSubjectName                  LiveLinkSubjectName;                               // 0x20(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	class UClass*                                RetargetAsset;                                     // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x30(0x8)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_260F[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x8C0 - 0x878)
// ScriptStruct LiveLinkAnimationCore.LiveLinkInstanceProxy
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
public:
	struct FAnimNode_LiveLinkPose                PoseNode;                                          // 0x878(0x48)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)
};

}


