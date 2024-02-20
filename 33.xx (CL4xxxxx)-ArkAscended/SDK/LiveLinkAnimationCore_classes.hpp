#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x350 - 0x348)
// Class LiveLinkAnimationCore.LiveLinkInstance
class ULiveLinkInstance : public UAnimInstance
{
public:
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x348(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULiveLinkInstance* GetDefaultObj();

	struct FLiveLinkSubjectName SetSubject();
	void SetRetargetAsset(class UClass* RetargetAsset);
};

// 0x0 (0x28 - 0x28)
// Class LiveLinkAnimationCore.LiveLinkRetargetAsset
class ULiveLinkRetargetAsset : public UObject
{
public:

	static class UClass* StaticClass();
	static class ULiveLinkRetargetAsset* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class LiveLinkAnimationCore.LiveLinkRemapAsset
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	uint8                                        Pad_225F[0xA0];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ULiveLinkRemapAsset* GetDefaultObj();

	TMap<class FName, float> RemapCurveElements();
	class FName GetRemappedCurveName(class FName ReturnValue);
	void GetRemappedBoneName(class FName* BoneName, class FName ReturnValue);
};

}


