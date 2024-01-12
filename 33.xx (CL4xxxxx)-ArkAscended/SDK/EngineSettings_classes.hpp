#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// Class EngineSettings.ConsoleSettings
class UConsoleSettings : public UObject
{
public:
	int32                                        MaxScrollbackSize;                                 // 0x28(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, DuplicateTransient)
	uint8                                        Pad_296D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAutoCompleteCommand>          ManualAutoCompleteList;                            // 0x30(0x10)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, DuplicateTransient)
	TArray<class FString>                        AutoCompleteMapPaths;                              // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, DuplicateTransient)
	float                                        BackgroundOpacityPercentage;                       // 0x50(0x4)(EditConst, SubobjectReference)
	bool                                         bOrderTopToBottom;                                 // 0x54(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bDisplayHelpInAutoComplete;                        // 0x55(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_296E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                InputColor;                                        // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditConst, SubobjectReference)
	struct FColor                                HistoryColor;                                      // 0x5C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, SubobjectReference)
	struct FColor                                AutoCompleteCommandColor;                          // 0x60(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditConst, SubobjectReference)
	struct FColor                                AutoCompleteCVarColor;                             // 0x64(0x4)(Edit, ExportObject, Net, EditConst, SubobjectReference)
	struct FColor                                AutoCompleteFadedColor;                            // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditConst, SubobjectReference)
	uint8                                        Pad_296F[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UConsoleSettings* GetDefaultObj();

};

// 0xF8 (0x120 - 0x28)
// Class EngineSettings.GameMapsSettings
class UGameMapsSettings : public UObject
{
public:
	class FString                                LocalMapOptions;                                   // 0x28(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	struct FSoftObjectPath                       TransitionMap;                                     // 0x38(0x20)(BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         bUseSplitscreen;                                   // 0x58(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	enum class ETwoPlayerSplitScreenType         TwoPlayerSplitscreenLayout;                        // 0x59(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	enum class EThreePlayerSplitScreenType       ThreePlayerSplitscreenLayout;                      // 0x5A(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	enum class EFourPlayerSplitScreenType        FourPlayerSplitscreenLayout;                       // 0x5B(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bOffsetPlayerGamepadIds;                           // 0x5C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2977[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        GameInstanceClass;                                 // 0x60(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	struct FSoftObjectPath                       GameDefaultMap;                                    // 0x80(0x20)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	struct FSoftObjectPath                       ServerDefaultMap;                                  // 0xA0(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	struct FSoftClassPath                        GlobalDefaultGameMode;                             // 0xC0(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig)
	struct FSoftClassPath                        GlobalDefaultServerGameMode;                       // 0xE0(0x20)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	TArray<struct FGameModeName>                 GameModeMapPrefixes;                               // 0x100(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	TArray<struct FGameModeName>                 GameModeClassAliases;                              // 0x110(0x10)(BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGameMapsSettings* GetDefaultObj();

	bool SetSkipAssigningGamepadToPlayer1();
	bool GetSkipAssigningGamepadToPlayer1();
	class UGameMapsSettings* GetGameMapsSettings();
};

// 0x30 (0x58 - 0x28)
// Class EngineSettings.GameNetworkManagerSettings
class UGameNetworkManagerSettings : public UObject
{
public:
	int32                                        MinDynamicBandwidth;                               // 0x28(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        MaxDynamicBandwidth;                               // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        TotalNetBandwidth;                                 // 0x30(0x4)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        BadPingThreshold;                                  // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        bIsStandbyCheckingEnabled : 1;                     // Mask: 0x1, PropSize: 0x10x38(0x1)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        BitPad_214 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_2978[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StandbyRxCheatTime;                                // 0x3C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        StandbyTxCheatTime;                                // 0x40(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PercentMissingForRxStandby;                        // 0x44(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PercentMissingForTxStandby;                        // 0x48(0x4)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        PercentForBadPing;                                 // 0x4C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        JoinInProgressStandbyWaitTime;                     // 0x50(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_2979[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameNetworkManagerSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EngineSettings.GameSessionSettings
class UGameSessionSettings : public UObject
{
public:
	int32                                        MaxSpectators;                                     // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	int32                                        MaxPlayers;                                        // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        bRequiresPushToTalk : 1;                           // Mask: 0x1, PropSize: 0x10x30(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_297A[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameSessionSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class EngineSettings.GeneralEngineSettings
class UGeneralEngineSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGeneralEngineSettings* GetDefaultObj();

};

// 0xF0 (0x118 - 0x28)
// Class EngineSettings.GeneralProjectSettings
class UGeneralProjectSettings : public UObject
{
public:
	class FString                                CompanyName;                                       // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                CompanyDistinguishedName;                          // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                CopyrightNotice;                                   // 0x48(0x10)(Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                Description;                                       // 0x58(0x10)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                Homepage;                                          // 0x68(0x10)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                LicensingTerms;                                    // 0x78(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                PrivacyPolicy;                                     // 0x88(0x10)(Edit, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	struct FGuid                                 ProjectID;                                         // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, DuplicateTransient)
	class FString                                ProjectName;                                       // 0xA8(0x10)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                ProjectVersion;                                    // 0xB8(0x10)(BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FString                                SupportContact;                                    // 0xC8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	class FText                                  ProjectDisplayedTitle;                             // 0xD8(0x18)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FText                                  ProjectDebugTitleInfo;                             // 0xF0(0x18)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bShouldWindowPreserveAspectRatio;                  // 0x108(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bUseBorderlessWindow;                              // 0x109(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bStartInVR;                                        // 0x10A(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	bool                                         bAllowWindowResize;                                // 0x10B(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bAllowClose;                                       // 0x10C(0x1)(ConstParm, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bAllowMaximize;                                    // 0x10D(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	bool                                         bAllowMinimize;                                    // 0x10E(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	uint8                                        Pad_2988[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        EyeOffsetForFakeStereoRenderingDevice;             // 0x110(0x4)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)
	float                                        FOVForFakeStereoRenderingDevice;                   // 0x114(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeneralProjectSettings* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EngineSettings.HudSettings
class UHudSettings : public UObject
{
public:
	uint8                                        bShowHUD : 1;                                      // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_218 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_298C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          DebugDisplay;                                      // 0x30(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

	static class UClass* StaticClass();
	static class UHudSettings* GetDefaultObj();

};

}


