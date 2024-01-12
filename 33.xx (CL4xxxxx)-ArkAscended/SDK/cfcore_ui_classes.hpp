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
	FMulticastInlineDelegateProperty_            ControllerButtonInViewState;                       // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20B3[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UBindButtonSystem* GetDefaultObj();

	void StartBind();
	enum class EViewState SetViewState();
	void EndBind();
	void ControllerAction(const struct FKey& Key);
};

// 0x1A8 (0x4F0 - 0x348)
// Class cfcore_ui.CFCoreButtonImage
class UCFCoreButtonImage : public UImage
{
public:
	bool                                         UseDefaultBrushOnPC;                               // 0x348(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20B4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           PlayStationButtonImage;                            // 0x350(0xD0)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	struct FSlateBrush                           XboxButtonImage;                                   // 0x420(0xD0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCFCoreButtonImage* GetDefaultObj();

};

// 0xC0 (0xF8 - 0x38)
// Class cfcore_ui.CFCoreGamepadCursorSettings
class UCFCoreGamepadCursorSettings : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                    AnalogCursorAccelerationCurve;                     // 0x38(0x88)(ExportObject, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxAnalogCursorSpeed;                              // 0xC0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxAnalogCursorSpeedWhenHovered;                   // 0xC4(0x4)(BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalogCursorDragCoefficient;                       // 0xC8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalogCursorDragCoefficientWhenHovered;            // 0xCC(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        MinAnalogCursorSpeed;                              // 0xD0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalogCursorDeadZone;                              // 0xD4(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalogCursorAccelerationMultiplier;                // 0xD8(0x4)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	float                                        AnalogCursorSize;                                  // 0xDC(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseEngineAnalogCursor;                            // 0xE0(0x1)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAnalogCursorNoAcceleration;                       // 0xE1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20B7[0x16];                                    // Fixing Size Of Struct > TateDumper <

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

	int64 Int64_SubOne(int64 Value);
	int64 Int64_AddOne(int64 Value);
	int32 Int32_SubOne(int32 Value);
	int32 Int32_AddOne(int32 Value);
};

// 0x70 (0x980 - 0x910)
// Class cfcore_ui.CFCoreRichText
class UCFCoreRichText : public URichTextBlock
{
public:
	TMap<class FString, class UTexture2DDynamic*> ImageMap;                                          // 0x910(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_20BD[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreRichText* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class cfcore_ui.CFCoreRichTextBlockImageDecorator
class UCFCoreRichTextBlockImageDecorator : public URichTextBlockImageDecorator
{
public:
	class UCFCoreRichText*                       CoreRichText;                                      // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x38(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x48(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCFCoreRichTextBlockImageDecorator* GetDefaultObj();

	void SetImageToMap(class UTexture2DDynamic** Image, const class FString& ImageUrl);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreThemeSettings
class UCFCoreThemeSettings : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreThemeSettings* GetDefaultObj();

	void CommitThemeData(class UDataTable** ThemeDataTable, const class FString& ThemeName, const struct FCFCoreThemeRowData& Data);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreUIBaseModel
class ICFCoreUIBaseModel : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICFCoreUIBaseModel* GetDefaultObj();

	bool OnEventReceived_LibraryProgress(enum class EGameModsEvent* Evt, struct FLibraryProgress* Progress, TArray<struct FInstallProgressMod>* OutModsList);
	bool OnEventReceived_Installed(enum class EGameModsEvent* Evt, TArray<struct FInstalledMod>* InModsList, TArray<struct FInstallProgressMod>* OutModsList);
	bool OnEventReceived(enum class EGameModsEvent* Evt, TArray<struct FCFCoreMod>* InModsList, TArray<struct FInstallProgressMod>* OutModsList);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreUIBaseView
class ICFCoreUIBaseView : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICFCoreUIBaseView* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent* Evt, TArray<struct FInstallProgressMod>* ModsList);
};

// 0x58 (0x80 - 0x28)
// Class cfcore_ui.CFCoreUIModel
class UCFCoreUIModel : public UObject
{
public:
	uint8                                        Pad_20CE[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreUIModel* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class cfcore_ui.CFCoreUISubsystem
class UCFCoreUISubsystem : public UGameInstanceSubsystem
{
public:
	FDelegateProperty_                           UIPurchaseModDelegate;                             // 0x30(0x10)(Edit, ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	FDelegateProperty_                           UIPurchaseModsDelegate;                            // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2125[0x118];                                   // Fixing Size After Last Property  > TateDumper <
	TArray<class UObject*>                       Models;                                            // 0x168(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_2126[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreUISubsystem* GetDefaultObj();

	struct FCFCoreMod UpdateMod();
	void UnsubscribeViewFromEvents(class UObject* View, TArray<enum class EGameModsEvent>* Evts);
	bool UnsubscribeViewFromEvent(class UObject* View, enum class EGameModsEvent* Evt);
	bool UnregisterModelClass(class UClass** ModelClass);
	struct FCFCoreMod UninstallMod();
	bool SubscribeViewToEvents(class UObject* View, TArray<enum class EGameModsEvent>* Evts, bool* InitializeView);
	bool SubscribeViewToEvent(class UObject* View, enum class EGameModsEvent* Evt, bool* InitializeView);
	struct FCFCoreMod SetMod(struct FInstalledMod* InInstalledMod, struct FInstalledMod* OutInstalledMod);
	struct FCFCoreApiRequestPagination SearchMods(struct FCFCoreSearchModsFilter* Filter);
	void ReleaseUIController();
	void RegisterPurchaseModsDelegate(FDelegateProperty_* PurchaseModsDelegate);
	void RegisterPurchaseModDelegate(FDelegateProperty_* PurchaseModDelegate);
	bool RegisterModelClass(class UClass** ModelClass);
	void RegisterErrorDelegate(FDelegateProperty_* ErrorDelegate);
	TArray<int64> PurchaseMods();
	int64 PurchaseMod();
	void OnUninstall(const struct FInstalledMod& InstalledMod);
	struct FCFCoreError OnSearchModsError();
	struct FCFCoreApiResponsePagination OnSearchMods();
	struct FCFCoreError OnMyModsError();
	TArray<struct FCFCoreMod> OnMyMods();
	struct FCFCoreError OnModUninstallError();
	struct FCFCoreError OnModInstallError(struct FCFCoreMod* InstallingMod);
	void OnInstallProgress(struct FLibraryProgress* Progress);
	TArray<struct FCFCoreMod> OnGetModsByIds();
	struct FCFCoreError OnGetInstalledModsError();
	void OnGetInstalledMods(TArray<struct FInstalledMod>* InstalledMods);
	void OnFinishedUpdating(struct FInstalledMod* UpdatedMod);
	void OnFinishedInstalling(const struct FInstalledMod& InstalledMod);
	void OnCancelModInstallationSuccess();
	struct FCFCoreError OnCancelModInstallation();
	struct FInstallProgressMod MakeFInstallProgressModFromID(int64* ID);
	struct FInstallProgressMod MakeFInstallProgressMod();
	bool IsAnyModInstalling();
	struct FCFCoreMod InstallMod();
	void InitializeUIController();
	bool InitializeModView(class UObject* View);
	void GetMyMods();
	bool GetModById(struct FInstallProgressMod* OutMod, int64* ID);
	void GetInstalledMods();
	struct FCFCoreMod CancelModInstallation();
	TArray<int64> ApiGetModsById();
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreVirtualCursorFunctionLibrary
class UCFCoreVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreVirtualCursorFunctionLibrary* GetDefaultObj();

	bool IsCursorOverInteractableWidget();
	void EnableVirtualCursor(class APlayerController** PC);
	void DisableVirtualCursor(class APlayerController** PC);
};

}


