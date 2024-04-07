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
	FMulticastInlineDelegateProperty_            ControllerButtonInViewState;                       // 0x30(0x10)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_156C[0x18];                                    // Fixing Size Of Struct > TateDumper <

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
	bool                                         UseDefaultBrushOnPC;                               // 0x348(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1571[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateBrush                           PlayStationButtonImage;                            // 0x350(0xD0)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FSlateBrush                           XboxButtonImage;                                   // 0x420(0xD0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCFCoreButtonImage* GetDefaultObj();

};

// 0xC0 (0xF8 - 0x38)
// Class cfcore_ui.CFCoreGamepadCursorSettings
class UCFCoreGamepadCursorSettings : public UDeveloperSettings
{
public:
	struct FRuntimeFloatCurve                    AnalogCursorAccelerationCurve;                     // 0x38(0x88)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxAnalogCursorSpeed;                              // 0xC0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MaxAnalogCursorSpeedWhenHovered;                   // 0xC4(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnalogCursorDragCoefficient;                       // 0xC8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnalogCursorDragCoefficientWhenHovered;            // 0xCC(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        MinAnalogCursorSpeed;                              // 0xD0(0x4)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnalogCursorDeadZone;                              // 0xD4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnalogCursorAccelerationMultiplier;                // 0xD8(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        AnalogCursorSize;                                  // 0xDC(0x4)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bUseEngineAnalogCursor;                            // 0xE0(0x1)(ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         bAnalogCursorNoAcceleration;                       // 0xE1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1576[0x16];                                    // Fixing Size Of Struct > TateDumper <

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

	int64 Int64_SubOne(int64* Value);
	int64 Int64_AddOne(int64* Value);
	int32 Int32_SubOne(int32* Value);
	int32 Int32_AddOne(int32* Value);
};

// 0x70 (0x980 - 0x910)
// Class cfcore_ui.CFCoreRichText
class UCFCoreRichText : public URichTextBlock
{
public:
	TMap<class FString, class UTexture2DDynamic*> ImageMap;                                          // 0x910(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_1594[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreRichText* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class cfcore_ui.CFCoreRichTextBlockImageDecorator
class UCFCoreRichTextBlockImageDecorator : public URichTextBlockImageDecorator
{
public:
	class UCFCoreRichText*                       CoreRichText;                                      // 0x30(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x38(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCFCoreRichTextBlockImageDecorator* GetDefaultObj();

	class UTexture2DDynamic* SetImageToMap(const class FString& ImageUrl);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreRichTextBlockICodeBlockDecorator
class UCFCoreRichTextBlockICodeBlockDecorator : public URichTextBlockDecorator
{
public:

	static class UClass* StaticClass();
	static class UCFCoreRichTextBlockICodeBlockDecorator* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreThemeSettings
class UCFCoreThemeSettings : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCFCoreThemeSettings* GetDefaultObj();

	void CommitThemeData(class UDataTable* ThemeDataTable, const class FString& ThemeName, struct FCFCoreThemeRowData* Data);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreUIBaseModel
class ICFCoreUIBaseModel : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICFCoreUIBaseModel* GetDefaultObj();

	bool OnEventReceived_LibraryProgress(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& OutModsList);
	bool OnEventReceived_Installed(enum class EGameModsEvent Evt, const TArray<struct FInstalledMod>& InModsList, const TArray<struct FInstallProgressMod>& OutModsList);
	bool OnEventReceived(enum class EGameModsEvent Evt, const TArray<struct FCFCoreMod>& InModsList, const TArray<struct FInstallProgressMod>& OutModsList);
};

// 0x0 (0x28 - 0x28)
// Class cfcore_ui.CFCoreUIBaseView
class ICFCoreUIBaseView : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ICFCoreUIBaseView* GetDefaultObj();

	bool OnEventBroadcasted(enum class EGameModsEvent Evt, const TArray<struct FInstallProgressMod>& ModsList);
};

// 0x58 (0x80 - 0x28)
// Class cfcore_ui.CFCoreUIModel
class UCFCoreUIModel : public UObject
{
public:
	uint8                                        Pad_15CE[0x58];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreUIModel* GetDefaultObj();

};

// 0x168 (0x198 - 0x30)
// Class cfcore_ui.CFCoreUISubsystem
class UCFCoreUISubsystem : public UGameInstanceSubsystem
{
public:
	FDelegateProperty_                           UIPurchaseModDelegate;                             // 0x30(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	FDelegateProperty_                           UIPurchaseModsDelegate;                            // 0x40(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_165D[0x118];                                   // Fixing Size After Last Property  > TateDumper <
	TArray<class UObject*>                       Models;                                            // 0x168(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_165E[0x20];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCFCoreUISubsystem* GetDefaultObj();

	struct FCFCoreMod UpdateMod();
	void UnsubscribeViewFromEvents(class UObject* View, const TArray<enum class EGameModsEvent>& Evts);
	bool UnsubscribeViewFromEvent(class UObject* View, enum class EGameModsEvent Evt);
	bool UnregisterModelClass(class UClass* ModelClass);
	struct FCFCoreMod UninstallMod();
	bool SubscribeViewToEvents(class UObject* View, const TArray<enum class EGameModsEvent>& Evts, bool InitializeView);
	bool SubscribeViewToEvent(class UObject* View, enum class EGameModsEvent Evt, bool InitializeView);
	struct FCFCoreMod SetMod(const struct FInstalledMod& InInstalledMod, const struct FInstalledMod& OutInstalledMod);
	struct FCFCoreApiRequestPagination SearchMods();
	void ReleaseUIController();
	void RegisterPurchaseModsDelegate(FDelegateProperty_ PurchaseModsDelegate);
	void RegisterPurchaseModDelegate(FDelegateProperty_ PurchaseModDelegate);
	bool RegisterModelClass(class UClass* ModelClass);
	void RegisterErrorDelegate(FDelegateProperty_ ErrorDelegate);
	TArray<int64> PurchaseMods();
	void PurchaseMod(int64 ModId);
	void OnUninstall(struct FInstalledMod* InstalledMod);
	struct FCFCoreError OnSearchModsError();
	struct FCFCoreApiResponsePagination OnSearchMods();
	struct FCFCoreError OnMyModsError();
	TArray<struct FCFCoreMod> OnMyMods();
	struct FCFCoreError OnModUninstallError();
	struct FCFCoreError OnModInstallError(const struct FCFCoreMod& InstallingMod);
	struct FLibraryProgress OnInstallProgress();
	TArray<struct FCFCoreMod> OnGetModsByIds();
	struct FCFCoreError OnGetInstalledModsError();
	void OnGetInstalledMods(TArray<struct FInstalledMod>* InstalledMods);
	void OnFinishedUpdating(const struct FInstalledMod& UpdatedMod);
	void OnFinishedInstalling(struct FInstalledMod* InstalledMod);
	void OnCancelModInstallationSuccess();
	struct FCFCoreError OnCancelModInstallation();
	struct FInstallProgressMod MakeFInstallProgressModFromID(int64* ID);
	struct FInstallProgressMod MakeFInstallProgressMod();
	bool IsAnyModInstalling();
	struct FCFCoreMod InstallMod();
	void InitializeUIController();
	bool InitializeModView(class UObject* View);
	void GetMyMods();
	bool GetModById(const struct FInstallProgressMod& OutMod, int64* ID);
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
	class APlayerController* EnableVirtualCursor();
	class APlayerController* DisableVirtualCursor();
};

}


