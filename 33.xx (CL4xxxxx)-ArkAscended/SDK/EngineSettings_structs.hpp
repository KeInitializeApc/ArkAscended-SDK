#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ETwoPlayerSplitScreenType : uint8
{
	Horizontal                     = 0,
	Vertical                       = 1,
	ETwoPlayerSplitScreenType_MAX  = 2,
};

enum class EThreePlayerSplitScreenType : uint8
{
	FavorTop                       = 0,
	FavorBottom                    = 1,
	Vertical                       = 2,
	Horizontal                     = 3,
	EThreePlayerSplitScreenType_MAX = 4,
};

enum class EFourPlayerSplitScreenType : uint8
{
	Grid                           = 0,
	Vertical                       = 1,
	Horizontal                     = 2,
	EFourPlayerSplitScreenType_MAX = 3,
};

enum class ESubLevelStripMode : uint8
{
	ExactClass                     = 0,
	IsChildOf                      = 1,
	ESubLevelStripMode_MAX         = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct EngineSettings.AutoCompleteCommand
struct FAutoCompleteCommand
{
public:
	class FString                                Command;                                           // 0x0(0x10)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Desc;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_22A2[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EngineSettings.GameModeName
struct FGameModeName
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	struct FSoftClassPath                        GameMode;                                          // 0x10(0x20)(ExportObject, Net, ReturnParm, Transient, GlobalConfig)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct EngineSettings.TemplateMapInfoOverride
struct FTemplateMapInfoOverride
{
public:
	struct FSoftObjectPath                       Thumbnail;                                         // 0x0(0x20)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	struct FSoftObjectPath                       Map;                                               // 0x20(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	class FText                                  DisplayName;                                       // 0x40(0x18)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient)
};

}


