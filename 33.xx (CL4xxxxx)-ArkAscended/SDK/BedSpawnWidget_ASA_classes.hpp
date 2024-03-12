#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x3F0 - 0x330)
// WidgetBlueprintGeneratedClass BedSpawnWidget_ASA.BedSpawnWidget_ASA_C
class UBedSpawnWidget_ASA_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UWidgetAnimation*                      FadeIn;                                            // 0x338(0x8)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst)
	class UBorder*                               BorderDifficult;                                   // 0x340(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UImage*                                Image;                                             // 0x348(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class UImage*                                Image_1;                                           // 0x350(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, Interp)
	class UImage*                                Image_DefaultDestination;                          // 0x358(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UButton*                               MainButton;                                        // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UBorder*                               OutsideRadiusOut;                                  // 0x368(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UOverlay*                              OverlayHoverFX;                                    // 0x370(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UTextBlock*                            QuantityBeds;                                      // 0x378(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            Clicked;                                           // 0x380(0x10)(Edit, ExportObject, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIsSelected;                                       // 0x390(0x1)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	uint8                                        Pad_37CA[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        SpawnID;                                           // 0x394(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       NextAllowedUseTime;                                // 0x398(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         AllowedUse;                                        // 0x3A0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_37CB[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Location;                                          // 0x3A8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	TArray<int32>                                AverageBeds;                                       // 0x3C0(0x10)(ConstParm, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                BedName;                                           // 0x3D0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsDefaultDestination;                             // 0x3E0(0x1)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bIncludesDefaultDestination;                       // 0x3E1(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_37D0[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Icon;                                              // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)

	static class UClass* StaticClass();
	static class UBedSpawnWidget_ASA_C* GetDefaultObj();

	void SetupBedIcon(class UTexture2D* BedIcon);
	bool Get_Image_DefaultDestination_ColorAndOpacity(double CallFunc_SelectFloat_ReturnValue, struct FLinearColor* CallFunc_MakeColor_ReturnValue, float CallFunc_MakeColor_A_ImplicitCast);
	void BndEvt__SpawnRegionWidget_ASA_MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetSelected(bool* Selected);
	class FString SetupBed(struct FVector* Location, bool bIsDefaultDest);
	int32 SetQuantityBeds();
	void Construct();
	bool ExecuteUbergraph_BedSpawnWidget_ASA(int32* EntryPoint, bool K2Node_CustomEvent_Selected, int32* K2Node_Event_SpawnPointID, double* K2Node_Event_NextAllowedUseTime, bool* K2Node_Event_bAllowedUse, struct FVector* K2Node_Event_Location, class FString* K2Node_Event_BedName, bool* K2Node_Event_bIsDefaultDest, int32 K2Node_CustomEvent_Quantity, bool* CallFunc_EqualEqual_IntInt_ReturnValue);
	void Clicked__DelegateSignature(class UBedSpawnWidget_ASA_C* BedSpawn);
};

}


