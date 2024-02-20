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
	int32                                        MaxScrollbackSize;                                 // 0x28(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1CD0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAutoCompleteCommand>          ManualAutoCompleteList;                            // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	TArray<class FString>                        AutoCompleteMapPaths;                              // 0x40(0x10)(ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	float                                        BackgroundOpacityPercentage;                       // 0x50(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	bool                                         bOrderTopToBottom;                                 // 0x54(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bDisplayHelpInAutoComplete;                        // 0x55(0x1)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CD1[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                InputColor;                                        // 0x58(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FColor                                HistoryColor;                                      // 0x5C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FColor                                AutoCompleteCommandColor;                          // 0x60(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FColor                                AutoCompleteCVarColor;                             // 0x64(0x4)(ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FColor                                AutoCompleteFadedColor;                            // 0x68(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1CD3[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UConsoleSettings* GetDefaultObj();

};

// 0xF8 (0x120 - 0x28)
// Class EngineSettings.GameMapsSettings
class UGameMapsSettings : public UObject
{
public:
	class FString                                LocalMapOptions;                                   // 0x28(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FSoftObjectPath                       TransitionMap;                                     // 0x38(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	bool                                         bUseSplitscreen;                                   // 0x58(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	enum class ETwoPlayerSplitScreenType         TwoPlayerSplitscreenLayout;                        // 0x59(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	enum class EThreePlayerSplitScreenType       ThreePlayerSplitscreenLayout;                      // 0x5A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	enum class EFourPlayerSplitScreenType        FourPlayerSplitscreenLayout;                       // 0x5B(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bOffsetPlayerGamepadIds;                           // 0x5C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CDE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftClassPath                        GameInstanceClass;                                 // 0x60(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FSoftObjectPath                       GameDefaultMap;                                    // 0x80(0x20)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FSoftObjectPath                       ServerDefaultMap;                                  // 0xA0(0x20)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FSoftClassPath                        GlobalDefaultGameMode;                             // 0xC0(0x20)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FSoftClassPath                        GlobalDefaultServerGameMode;                       // 0xE0(0x20)(BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, SubobjectReference)
	TArray<struct FGameModeName>                 GameModeMapPrefixes;                               // 0x100(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	TArray<struct FGameModeName>                 GameModeClassAliases;                              // 0x110(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UGameMapsSettings* GetDefaultObj();

	bool SetSkipAssigningGamepadToPlayer1();
	void GetSkipAssigningGamepadToPlayer1(bool ReturnValue);
	void GetGameMapsSettings(class UGameMapsSettings* ReturnValue);
};

// 0x30 (0x58 - 0x28)
// Class EngineSettings.GameNetworkManagerSettings
class UGameNetworkManagerSettings : public UObject
{
public:
	int32                                        MinDynamicBandwidth;                               // 0x28(0x4)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        MaxDynamicBandwidth;                               // 0x2C(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        TotalNetBandwidth;                                 // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	int32                                        BadPingThreshold;                                  // 0x34(0x4)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bIsStandbyCheckingEnabled : 1;                     // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_EA : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1CEB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StandbyRxCheatTime;                                // 0x3C(0x4)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        StandbyTxCheatTime;                                // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        PercentMissingForRxStandby;                        // 0x44(0x4)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        PercentMissingForTxStandby;                        // 0x48(0x4)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        PercentForBadPing;                                 // 0x4C(0x4)(Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        JoinInProgressStandbyWaitTime;                     // 0x50(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1CEF[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameNetworkManagerSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class EngineSettings.GameSessionSettings
class UGameSessionSettings : public UObject
{
public:
	int32                                        MaxSpectators;                                     // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	int32                                        MaxPlayers;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        bRequiresPushToTalk : 1;                           // Mask: 0x1, PropSize: 0x10x30(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1CF2[0x7];                                     // Fixing Size Of Struct > TateDumper <

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
	class FString                                CompanyName;                                       // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
	class FString                                CompanyDistinguishedName;                          // 0x38(0x10)(BlueprintVisible, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	class FString                                CopyrightNotice;                                   // 0x48(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	class FString                                Description;                                       // 0x58(0x10)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, DuplicateTransient)
	class FString                                Homepage;                                          // 0x68(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	class FString                                LicensingTerms;                                    // 0x78(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	class FString                                PrivacyPolicy;                                     // 0x88(0x10)(ConstParm, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	struct FGuid                                 ProjectID;                                         // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                ProjectName;                                       // 0xA8(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	class FString                                ProjectVersion;                                    // 0xB8(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	class FString                                SupportContact;                                    // 0xC8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
	class FText                                  ProjectDisplayedTitle;                             // 0xD8(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	class FText                                  ProjectDebugTitleInfo;                             // 0xF0(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bShouldWindowPreserveAspectRatio;                  // 0x108(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bUseBorderlessWindow;                              // 0x109(0x1)(ConstParm, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bStartInVR;                                        // 0x10A(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowWindowResize;                                // 0x10B(0x1)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bAllowClose;                                       // 0x10C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bAllowMaximize;                                    // 0x10D(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         bAllowMinimize;                                    // 0x10E(0x1)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1CF6[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        EyeOffsetForFakeStereoRenderingDevice;             // 0x110(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        FOVForFakeStereoRenderingDevice;                   // 0x114(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UGeneralProjectSettings* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class EngineSettings.HudSettings
class UHudSettings : public UObject
{
public:
	uint8                                        bShowHUD : 1;                                      // Mask: 0x1, PropSize: 0x10x28(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_EB : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1CFA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          DebugDisplay;                                      // 0x30(0x10)(Edit, ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UHudSettings* GetDefaultObj();

};

}


