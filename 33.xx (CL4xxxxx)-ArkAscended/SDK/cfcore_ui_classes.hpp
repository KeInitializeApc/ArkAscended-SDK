#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x58 - 0x30)
// Class cfcore_ui.BindButtonSystem
class UBindButtonSystem : public UEngineSubsystem
{
public:
	FMulticastInlineDelegateProperty_            ControllerButtonInViewState;                       // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CFF[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBindButtonSystem* GetDefaultObj();

	void StartBind();
	void SetViewState(enum class EViewState* NewState);
	void EndBind();
	void ControllerAction(const struct FKey& Key);
};

// 0x1A8 (0x4F0 - 0x348)
// Class cfcore_ui.CFCoreButtonImage
class UCFCoreButtonImage : public UImage
{
public:
	bool                                         UseDefaultBrushOnPC;                               // 0x348(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D00[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           PlayStationButtonImage;                            // 0x350(0xD0)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FSlateBrush                           XboxButtonImage;                                   // 0x420(0xD0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCFCoreButtonImage* GetDefaultObj();

};

// 0xC0 (0xF8 - 0x38)
// Class cfcore_ui.CFCoreGamepadCursorSettings
class UCFCoreGamepadCursorSettings : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                    AnalogCursorAccelerationCurve;                     // 0x38(0x88)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxAnalogCursorSpeed;                              // 0xC0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxAnalogCursorSpeedWhenHovered;                   // 0xC4(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalogCursorDragCoefficient;                       // 0xC8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalogCursorDragCoefficientWhenHovered;            // 0xCC(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MinAnalogCursorSpeed;                              // 0xD0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalogCursorDeadZone;                              // 0xD4(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalogCursorAccelerationMultiplier;                // 0xD8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalogCursorSize;                                  // 0xDC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseEngineAnalogCursor;                            // 0xE0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAnalogCursorNoAcceleration;                       // 0xE1(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D03[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreGamepadCursorSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreMathHelperFunctionLibrary
class UCFCoreMathHelperFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreMathHelperFunctionLibrary* GetDefaultObj();

	void Int64_SubOne(int64 Value, int64 ReturnValue);
	void Int64_AddOne(int64 Value, int64 ReturnValue);
	void Int32_SubOne(int32 Value, int32 ReturnValue);
	void Int32_AddOne(int32 Value, int32 ReturnValue);
};

// 0x70 (0x980 - 0x910)
// Class cfcore_ui.CFCoreRichText
class UCFCoreRichText : public URichTextBlock
{
public:
	TMap<class FString, class UTexture2DDynamic*> ImageMap;                                          // 0x910(0x50)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1D0E[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreRichText* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class cfcore_ui.CFCoreRichTextBlockImageDecorator
class UCFCoreRichTextBlockImageDecorator : public URichTextBlockImageDecorator
{
public:
	class UCFCoreRichText*                       CoreRichText;                                      // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x38(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x48(0x10)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCFCoreRichTextBlockImageDecorator* GetDefaultObj();

	class FString SetImageToMap(class UTexture2DDynamic** Image);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreThemeSettings
class UCFCoreThemeSettings : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreThemeSettings* GetDefaultObj();

	struct FCFCoreThemeRowData CommitThemeData();
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreUIBaseModel
class ICFCoreUIBaseModel : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICFCoreUIBaseModel* GetDefaultObj();

	TArray<struct FInstallProgressMod> OnEventReceived_LibraryProgress(bool ReturnValue);
	TArray<struct FInstallProgressMod> OnEventReceived_Installed(bool ReturnValue);
	TArray<struct FInstallProgressMod> OnEventReceived(bool ReturnValue);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreUIBaseView
class ICFCoreUIBaseView : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICFCoreUIBaseView* GetDefaultObj();

	TArray<struct FInstallProgressMod> OnEventBroadcasted(struct FCFCoreApiResponsePagination* Pagination, bool ReturnValue);
};

// 0x58 (0x80 - 0x28)
// Class cfcore_ui.CFCoreUIModel
class UCFCoreUIModel : public UObject
{
public:
	uint8                                        Pad_1D37[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreUIModel* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class cfcore_ui.CFCoreUISubsystem
class UCFCoreUISubsystem : public UGameInstanceSubsystem
{
public:
	FDelegateProperty_                           UIPurchaseModDelegate;                             // 0x30(0x10)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           UIPurchaseModsDelegate;                            // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DAB[0x118];                                   // Fixing Size After Last Property  > TateDumper <
	TArray<class UObject*>                       Models;                                            // 0x168(0x10)(Edit, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1DAC[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreUISubsystem* GetDefaultObj();

	void UpdateMod(const struct FCFCoreMod& Mod);
	TArray<enum class EGameModsEvent> UnsubscribeViewFromEvents(class UObject* View);
	enum class EGameModsEvent UnsubscribeViewFromEvent(class UObject* View, bool ReturnValue);
	class UClass* UnregisterModelClass(bool ReturnValue);
	void UninstallMod(const struct FCFCoreMod& Mod);
	bool SubscribeViewToEvents(class UObject* View, bool ReturnValue);
	bool SubscribeViewToEvent(class UObject* View, bool ReturnValue);
	struct FInstalledMod SetMod(const struct FCFCoreMod& Mod);
	void SearchMods(struct FCFCoreSearchModsFilter* Filter, struct FCFCoreApiRequestPagination* Pagination);
	void ReleaseUIController();
	FDelegateProperty_ RegisterPurchaseModsDelegate();
	FDelegateProperty_ RegisterPurchaseModDelegate();
	class UClass* RegisterModelClass(bool ReturnValue);
	FDelegateProperty_ RegisterErrorDelegate();
	TArray<int64> PurchaseMods();
	void PurchaseMod(int64 ModId);
	void OnUninstall(const struct FInstalledMod& InstalledMod);
	struct FCFCoreError OnSearchModsError();
	void OnSearchMods(const TArray<struct FCFCoreMod>& Mods, struct FCFCoreApiResponsePagination* Pagination);
	struct FCFCoreError OnMyModsError();
	void OnMyMods(const TArray<struct FCFCoreMod>& Mods);
	struct FCFCoreError OnModUninstallError();
	struct FCFCoreMod OnModInstallError();
	struct FLibraryProgress OnInstallProgress();
	void OnGetModsByIds(const TArray<struct FCFCoreMod>& Mods);
	struct FCFCoreError OnGetInstalledModsError();
	TArray<struct FInstalledMod> OnGetInstalledMods();
	struct FInstalledMod OnFinishedUpdating();
	void OnFinishedInstalling(const struct FInstalledMod& InstalledMod);
	void OnCancelModInstallationSuccess();
	struct FCFCoreError OnCancelModInstallation();
	void MakeFInstallProgressModFromID(int64* ID, const struct FInstallProgressMod& ReturnValue);
	void MakeFInstallProgressMod(const struct FCFCoreMod& Mod, const struct FInstallProgressMod& ReturnValue);
	void IsAnyModInstalling(bool ReturnValue);
	void InstallMod(const struct FCFCoreMod& Mod);
	void InitializeUIController();
	void InitializeModView(class UObject* View, const struct FCFCoreMod& Mod, bool ReturnValue);
	void GetMyMods();
	struct FInstallProgressMod GetModById(int64* ID, bool ReturnValue);
	void GetInstalledMods();
	void CancelModInstallation(const struct FCFCoreMod& Mod);
	void ApiGetModsById(TArray<int64>* ModIds);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreVirtualCursorFunctionLibrary
class UCFCoreVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreVirtualCursorFunctionLibrary* GetDefaultObj();

	void IsCursorOverInteractableWidget(bool ReturnValue);
	class APlayerController* EnableVirtualCursor();
	class APlayerController* DisableVirtualCursor();
};

}


