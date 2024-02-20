#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESentryLevel : uint8
{
	Debug                          = 0,
	Info                           = 1,
	Warning                        = 2,
	Error                          = 3,
	Fatal                          = 4,
	ESentryLevel_MAX               = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x5 (0x5 - 0x0)
// ScriptStruct Sentry.AutomaticBreadcrumbs
struct FAutomaticBreadcrumbs
{
public:
	bool                                         bOnMapLoadingStarted;                              // 0x0(0x1)(ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOnMapLoaded;                                      // 0x1(0x1)(Edit, ConstParm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOnGameStateClassChanged;                          // 0x2(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOnGameSessionIDChanged;                           // 0x3(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOnUserActivityStringChanged;                      // 0x4(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct Sentry.TagsPromotion
struct FTagsPromotion
{
public:
	bool                                         bPromoteBuildConfiguration;                        // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPromoteTargetType;                                // 0x1(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPromoteEngineMode;                                // 0x2(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPromoteIsGame;                                    // 0x3(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPromoteIsStandalone;                              // 0x4(0x1)(Net, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPromoteIsUnattended;                              // 0x5(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

}


