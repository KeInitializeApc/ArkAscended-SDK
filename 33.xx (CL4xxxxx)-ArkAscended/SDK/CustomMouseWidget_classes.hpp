#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x3A8 - 0x330)
// WidgetBlueprintGeneratedClass CustomMouseWidget.CustomMouseWidget_C
class UCustomMouseWidget_C : public UPrimalUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UImage*                                CircleArrowDown;                                   // 0x338(0x8)(ConstParm, ExportObject, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                CircleArrowLeft;                                   // 0x340(0x8)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                CircleArrowRight;                                  // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                CircleArrowUp;                                     // 0x350(0x8)(Edit, BlueprintVisible, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                CircleImage;                                       // 0x358(0x8)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                CircleReticule;                                    // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                InnerRing0;                                        // 0x368(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                InnerRing1;                                        // 0x370(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                InnerRing2;                                        // 0x378(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowDown;                                  // 0x380(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowLeft;                                  // 0x388(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowRight;                                 // 0x390(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                PointerArrowUp;                                    // 0x398(0x8)(Edit, ExportObject, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
	class UImage*                                PointerImage;                                      // 0x3A0(0x8)(Edit, BlueprintReadOnly, OutParm, ReturnParm, GlobalConfig, SubobjectReference)

	static class UClass* StaticClass();
	static class UCustomMouseWidget_C* GetDefaultObj();

	struct FVector2D SetInnerRingScales();
	float SetPointerColorAdd();
	bool ShowReticule();
	struct FVector2D SetPointerScale();
	float SetArrowAlpha();
	void UseCircle();
	void UseArrow();
	void Construct();
	int32 ExecuteUbergraph_CustomMouseWidget();
};

}


