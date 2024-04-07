#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPrimalCharacterInputType : uint8
{
	PrimaryFire                    = 0,
	Targeting                      = 1,
	AltFire                        = 2,
	SwitchWeapon                   = 3,
	Reload                         = 4,
	Crouch                         = 5,
	Prone                          = 6,
	CrouchProneToggle              = 7,
	SwitchMap                      = 8,
	DinoAttack                     = 9,
	EPrimalCharacterInputType_MAX  = 10,
};

enum class EUContextMenuItemSwitchMode : uint8
{
	None                           = 0,
	Radio                          = 1,
	Checkbox                       = 2,
	UContextMenuItemSwitchMode_MAX = 3,
};

enum class EAntiDupeTransactionLog : uint8
{
	Item_Upload                    = 0,
	Dino_Upload                    = 1,
	Player_Upload                  = 2,
	MAX_ENTRY                      = 3,
	EAntiDupeTransactionLog_MAX    = 4,
};

enum class EBiomeZone : uint8
{
	None                           = 0,
	Beach                          = 1,
	Canyon                         = 2,
	River                          = 3,
	Grassland                      = 4,
	Swamp                          = 5,
	Jungle                         = 6,
	RedwoodForest                  = 7,
	Mountain                       = 8,
	Snow                           = 9,
	Ocean                          = 10,
	Lava                           = 11,
	Surface                        = 12,
	FertileChamber                 = 13,
	BioluminescentChamber          = 14,
	ElementChamber                 = 15,
	Wasteland                      = 16,
	EBiomeZone_MAX                 = 17,
};

enum class EFolderWidgetType : uint8
{
	FWT_Back                       = 0,
	FWT_Folder                     = 1,
	FWT_CustomFolder               = 2,
	FWT_MAX                        = 3,
};

enum class EBoidType : uint8
{
	Follower                       = 0,
	Leader                         = 1,
	FreeAgent                      = 2,
	EBoidType_MAX                  = 3,
};

enum class EOldShaderPlatform : uint8
{
	OSP_PCD3D_SM5                  = 0,
	OSP_OPENGL_SM4                 = 1,
	OSP_PS4                        = 2,
	OSP_OPENGL_PCES2               = 3,
	OSP_XBOXONE                    = 4,
	OSP_PCD3D_SM4                  = 5,
	OSP_OPENGL_SM5                 = 6,
	OSP_PCD3D_ES2                  = 7,
	OSP_OPENGL_ES2_ANDROID         = 8,
	OSP_OPENGL_ES2_WEBGL           = 9,
	OSP_OPENGL_ES2_IOS             = 10,
	OSP_METAL                      = 11,
	OSP_OPENGL_SM4_MAC             = 12,
	OSP_METAL_MRT                  = 13,
	OSP_OPENGL_ES31_EXT            = 14,
	OSP_PCD3D_ES3_1                = 15,
	OSP_OPENGL_PCES3_1             = 16,
	OSP_METAL_SM5                  = 17,
	OSP_VULKAN_PCES3_1             = 18,
	OSP_METAL_SM4                  = 19,
	OSP_VULKAN_SM4                 = 20,
	OSP_VULKAN_SM5                 = 21,
	OSP_VULKAN_ES3_1_ANDROID       = 22,
	OSP_METAL_MACES3_1             = 23,
	OSP_METAL_MACES2               = 24,
	OSP_OPENGL_ES3_1_ANDROID       = 25,
	OSP_SWITCH                     = 26,
	OSP_SWITCH_FORWARD             = 27,
	OSP_NumPlatforms               = 28,
	OSP_MAX                        = 29,
};

enum class EMissionDispatcherTriggerMode : uint8
{
	AutoStartMission               = 0,
	Ignore                         = 1,
	ActivateViaMultiUse            = 2,
	EMissionDispatcherTriggerMode_MAX = 3,
};

enum class ENativeMissionMetaTag : uint8
{
	INVALID                        = 0,
	GENESIS_VR_BOSS_UNLOCK         = 1,
	ARCTIC_MISSION                 = 2,
	BOG_MISSION                    = 3,
	LUNAR_MISSION                  = 4,
	OCEAN_MISSION                  = 5,
	VOLCANIC_MISSION               = 6,
	NORMAL_DIFFICULTY              = 7,
	ALPHA_DIFFICULTY               = 8,
	BETA_DIFFICULTY                = 9,
	GAMMA_DIFFICULTY               = 10,
	MAX                            = 11,
};

enum class EMissionDispatchMode : uint8
{
	StartAnywhere                  = 0,
	RequireNearbyMissionDispatcher = 1,
	RequireInsideMissionDispatcher = 2,
	UseBPStaticCanStartMission     = 3,
	RequireInsideDispatcherNoCheck = 4,
	EMissionDispatchMode_MAX       = 5,
};

enum class ECompanionState : uint8
{
	IDLE                           = 0,
	FOCUSED                        = 1,
	EVENT                          = 2,
	MONOLOGUE                      = 3,
	ASLEEP                         = 4,
	CUSTOM                         = 5,
	ECompanionState_MAX            = 6,
};

enum class EGrappleState : uint8
{
	GRAPPLE_Idle                   = 0,
	GRAPPLE_Pulling                = 1,
	GRAPPLE_Releasing              = 2,
	GRAPPLE_Custom                 = 3,
	GRAPPLE_Max                    = 4,
};

enum class EClimbingMode : uint8
{
	None                           = 0,
	Attached                       = 1,
	Finalizing                     = 2,
	MAX                            = 3,
};

enum class EClimbingType : uint8
{
	None                           = 0,
	ClimbLook                      = 1,
	ClimbInput                     = 2,
	Slide                          = 3,
	MAX                            = 4,
};

enum class EClimbingAnimationType : uint8
{
	Up                             = 0,
	Down                           = 1,
	Right                          = 2,
	Left                           = 3,
	MeleeUp                        = 4,
	MeleeRight                     = 5,
	MeleeLeft                      = 6,
	FinishUp                       = 7,
	FinishDown                     = 8,
	HangingFwd                     = 9,
	HangingMelee                   = 10,
	HangingFinishUp                = 11,
	HangingFinishDown              = 12,
	JumpUp                         = 13,
	JumpUpRight                    = 14,
	JumpUpLeft                     = 15,
	SlideDown                      = 16,
	AttachUp                       = 17,
	AttachDown                     = 18,
	AttachHangingUp                = 19,
	AttachHangingDown              = 20,
	FlipLeft                       = 21,
	FlipRight                      = 22,
	FlipUp                         = 23,
	FlipDown                       = 24,
	TurnUp                         = 25,
	TurnDown                       = 26,
	TurnRight                      = 27,
	TurnLeft                       = 28,
	OpenInventory                  = 29,
	OpenInventoryHanging           = 30,
	QuakeFall                      = 31,
	MAX                            = 32,
};

enum class EBabyCuddleType : uint8
{
	PET                            = 0,
	FOOD                           = 1,
	WALK                           = 2,
	MAX                            = 3,
};

enum class EInteractionType : uint8
{
	InteractionType_Foliage        = 0,
	InteractionType_Fluid          = 1,
	InteractionType_Both           = 2,
	InteractionType_MAX            = 3,
};

enum class EEngramCategory : uint8
{
	TOOLS                          = 0,
	CLOTHING                       = 1,
	WEAPONS                        = 2,
	SADDLES                        = 3,
	STRUCTURES                     = 4,
	CRAFTING                       = 5,
	MISC                           = 6,
	MODSPECIFIC                    = 7,
	MAX                            = 8,
};

enum class EEngramGroup : uint8
{
	ARK_PRIME                      = 2,
	ARK_SCORCHEDEARTH              = 4,
	ARK_TEK                        = 8,
	ARK_UNLEARNED                  = 16,
	ARK_ABERRATION                 = 32,
	ARK_EXTINCTION                 = 64,
	ARK_GENESIS                    = 128,
	ARK_GEN2                       = 129,
	MAX                            = 130,
};

enum class EBoneModifierType : uint8
{
	HEAD                           = 0,
	NECK                           = 1,
	NECKLENGTH                     = 2,
	CHEST                          = 3,
	SHOULDERS                      = 4,
	ARMLENGTH                      = 5,
	UPPERARM                       = 6,
	LOWERARM                       = 7,
	HAND                           = 8,
	LEGLENGTH                      = 9,
	UPPERLEG                       = 10,
	LOWERLEG                       = 11,
	FOOT                           = 12,
	HIP                            = 13,
	TORSO                          = 14,
	UPPERFACESIZE                  = 15,
	LOWERFACESIZE                  = 16,
	TORSODEPTH                     = 17,
	HEADHEIGHT                     = 18,
	HEADWIDTH                      = 19,
	HEADDEPTH                      = 20,
	TORSOHEIGHT                    = 21,
	TORSOSIZE                      = 22,
	OVERALLHEIGHT                  = 23,
	EYESIZE                        = 24,
	EYEWIDTH                       = 25,
	MAX                            = 26,
};

enum class ETooltipMode : uint8
{
	DEFAULT                        = 0,
	ONLY_ACTION                    = 1,
	OFF                            = 2,
	ETooltipMode_MAX               = 3,
};

enum class ENotificationMode : uint8
{
	DEFAULT                        = 0,
	MINIMAL                        = 1,
	COMBAT                         = 2,
	OFF                            = 3,
	ENotificationMode_MAX          = 4,
};

enum class EPlayerConfigDynamicMaterialVectorTypes : uint8
{
	BODYFAT_FATDEPOSITS            = 0,
	BODYMUSCLE_CHEST               = 1,
	BODYMUSCLE_BACK                = 2,
	BODYMUSCLE_ARMS_1              = 3,
	BODYMUSCLE_ARMS_2              = 4,
	BODYMUSCLE_LEGS_1              = 5,
	BODYMUSCLE_LEGS_2              = 6,
	MAX                            = 7,
};

enum class EPlayerConfigPlayerDynamicMaterialSliderTypes : uint8
{
	BODYFAT_CHEST                  = 0,
	BODYFAT_BELLY                  = 1,
	BODYFAT_BUTT                   = 2,
	BODYMUSCLE_CHEST_PECTORALS     = 3,
	BODYMUSCLE_CHEST_ABS           = 4,
	BODYMUSCLE_CHEST_OBLIQUES      = 5,
	BODYMUSCLE_BACK_NECK           = 6,
	BODYMUSCLE_BACK_TRAPEZIES      = 7,
	BODYMUSCLE_BACK_BACK           = 8,
	BODYMUSCLE_ARMS_1_DELTOID      = 9,
	BODYMUSCLE_ARMS_1_TRICEP       = 10,
	BODYMUSCLE_ARMS_1_BICEP        = 11,
	BODYMUSCLE_ARMS_2_FOREARM      = 12,
	BODYMUSCLE_LEGS_1_LATS         = 13,
	BODYMUSCLE_LEGS_1_GLUTES       = 14,
	BODYMUSCLE_LEGS_1_HAMSTRINGS   = 15,
	BODYMUSCLE_LEGS_2_ADDUCTORS    = 16,
	BODYMUSCLE_LEGS_2_QUADS        = 17,
	BODYMUSCLE_LEGS_2_CALVES       = 18,
	BODYMUSCLE_OVERALL             = 19,
	BODYFATOVERALL                 = 20,
	MAX                            = 21,
};

enum class EPlayerDynamicMaterialType : uint8
{
	Float                          = 0,
	Vector                         = 1,
	Color                          = 2,
	EPlayerDynamicMaterialType_MAX = 3,
};

enum class ETeamPingType : uint8
{
	SmartPing                      = 0,
	GoHere                         = 1,
	Tame                           = 2,
	Follow                         = 3,
	FollowMe                       = 4,
	Attack                         = 5,
	Danger                         = 6,
	LootIt                         = 7,
	Track                          = 8,
	Rallypoint                     = 9,
	ETeamPingType_MAX              = 10,
};

enum class ETribeDataExclude : uint8
{
	TribeNone                      = 0,
	TribeLog                       = 1,
	TrackingPoints                 = 2,
	TribeLogAndTrackingPoints      = 3,
	ETribeDataExclude_MAX          = 4,
};

enum class ETribeGroupPermission : uint8
{
	STRUCTUREACTIVATE              = 0,
	INVENTORYACCESS                = 1,
	PET_ORDER                      = 2,
	PET_RIDE                       = 3,
	GENERAL_STRUCTUREDEMOLISH      = 4,
	GENERAL_STRUCTUREATTACHMENT    = 5,
	GENERAL_BUILDSTRUCTUREINRANGE  = 6,
	INVITEMEMBER                   = 7,
	PROMOTEMEMBER                  = 8,
	DEMOTEMEMBER                   = 9,
	BANISHMEMBER                   = 10,
	PET_UNCLAIM                    = 11,
	TELEPORT_MEMBERS               = 12,
	TELEPORT_DINOS                 = 13,
	PING                           = 14,
	RALLYPOINT                     = 15,
	WIRELESSCRAFTING               = 16,
	ETribeGroupPermission_MAX      = 17,
};

enum class EXPType : uint8
{
	XP_GENERIC                     = 0,
	XP_KILL                        = 1,
	XP_HARVEST                     = 2,
	XP_CRAFT                       = 3,
	XP_SPECIAL                     = 4,
	XP_ALPHAKILL                   = 5,
	XP_CAVEKILL                    = 6,
	XP_WILDKILL                    = 7,
	XP_BOSSKILL                    = 8,
	XP_TAMEDKILL                   = 9,
	XP_UNCLAIMEDKILL               = 10,
	XP_EXPLORERNOTE                = 11,
	MAX                            = 12,
};

enum class EDinoTamedOrder : uint8
{
	SetAggressionPassive           = 0,
	SetAggressionNeutral           = 1,
	SetAggressionAggressive        = 2,
	SetAggressionAttackTarget      = 3,
	ToggleFollowMe                 = 4,
	FollowMe                       = 5,
	StopFollowing                  = 6,
	CycleFollowDistance            = 7,
	SetAggressionPassiveFlee       = 8,
	LandingToMe                    = 9,
	MAX                            = 10,
};

enum class EPrimalItemStat : uint8
{
	GenericQuality                 = 0,
	Armor                          = 1,
	MaxDurability                  = 2,
	WeaponDamagePercent            = 3,
	WeaponClipAmmo                 = 4,
	HypothermalInsulation          = 5,
	Weight                         = 6,
	HyperthermalInsulation         = 7,
	MAX                            = 8,
};

enum class EPrimalCustomCosmeticType : uint8
{
	AllItems                       = 0,
	CreatureCustoms                = 1,
	PlayerCustoms                  = 2,
	Structures                     = 3,
	Weapons                        = 4,
	Armor                          = 5,
	Hat                            = 6,
	Shirt                          = 7,
	Gloves                         = 8,
	Pants                          = 9,
	Boots                          = 10,
	OffHand                        = 11,
	Saddles                        = 12,
	MAX                            = 13,
};

enum class EPrimalItemType : uint8
{
	MiscConsumable                 = 0,
	Equipment                      = 1,
	Weapon                         = 2,
	Ammo                           = 3,
	Structure                      = 4,
	Resource                       = 5,
	Skin                           = 6,
	WeaponAttachment               = 7,
	Artifact                       = 8,
	MAX                            = 9,
};

enum class ELevelExperienceRampType : uint8
{
	Player                         = 0,
	DinoEasy                       = 1,
	DinoMedium                     = 2,
	DinoHard                       = 3,
	MAX                            = 4,
};

enum class EPrimalConsumableType : uint8
{
	Food                           = 0,
	Water                          = 1,
	Medicine                       = 2,
	Other                          = 3,
	MAX                            = 4,
};

enum class EPrimalCharacterStatusState : uint8
{
	Dead                           = 0,
	Winded                         = 1,
	Starvation                     = 2,
	Dehydration                    = 3,
	Suffocation                    = 4,
	Encumbered                     = 5,
	Hypothermia                    = 6,
	Hyperthermia                   = 7,
	Injured                        = 8,
	KnockedOut                     = 9,
	Sleeping                       = 10,
	Cold                           = 11,
	Hot                            = 12,
	Crafting                       = 13,
	MAX                            = 14,
};

enum class EPrimalItemMessage : uint8
{
	Broken                         = 0,
	Repaired                       = 1,
	MAX                            = 2,
};

enum class ETraceType : uint8
{
	TT_LineTrace                   = 0,
	TT_ArcTrace                    = 1,
	TT_Max                         = 2,
};

enum class EPrimalStructureElevatorState : uint8
{
	PSLS_Down                      = 0,
	PSLS_Up                        = 1,
	PSLS_MAX                       = 2,
};

enum class ESeedCropPhase : uint8
{
	Seedling                       = 0,
	Midling                        = 1,
	Growthling                     = 2,
	Fruiting                       = 3,
	MAX                            = 4,
};

enum class ECrateMovementMode : uint8
{
	None                           = 0,
	Regular                        = 1,
	Throttled                      = 2,
	ECrateMovementMode_MAX         = 3,
};

enum class EPrimalStructurePlacerState : uint8
{
	Default                        = 0,
	FadeAway                       = 1,
	PlacingStructure               = 2,
	EPrimalStructurePlacerState_MAX = 3,
};

enum class EHighlightStartingPoint : uint8
{
	TopLeft                        = 0,
	Center                         = 1,
	HighlightStartingPoint_MAX     = 2,
};

enum class EControlDirection : uint8
{
	NoDirection                    = 0,
	Up                             = 1,
	Down                           = 2,
	Left                           = 3,
	Right                          = 4,
	ControlDirection_MAX           = 5,
};

enum class EWindSourceMode : uint8
{
	AtmosphericWind                = 0,
	FoliageInteraction             = 1,
	EWindSourceMode_MAX            = 2,
};

enum class EEffectScope : uint8
{
	FirstPersonOnly                = 0,
	ThirdPersonOnly                = 1,
	AllCameraModes                 = 2,
	EEffectScope_MAX               = 3,
};

enum class EWirelessTransmissionType : uint8
{
	Custom                         = 0,
	Power                          = 1,
	Water                          = 2,
	Fuel                           = 3,
	Ammo                           = 4,
	Crafting                       = 5,
	ItemTransfer                   = 6,
	EWirelessTransmissionType_MAX  = 7,
};

enum class EWorldBuffPropertyLocation : uint8
{
	GameMode                       = 0,
	GameState                      = 1,
	EWorldBuffPropertyLocation_MAX = 2,
};

enum class EWorldBuffDifficultyType : uint8
{
	GAMMA                          = 0,
	BETA                           = 1,
	ALPHA                          = 2,
	OTHER                          = 3,
	EWorldBuffDifficultyType_MAX   = 4,
};

enum class ECheatActorType : uint8
{
	Pawns                          = 0,
	Dino                           = 1,
	Player                         = 2,
	Tame                           = 3,
	Wild                           = 4,
	Structure                      = 5,
	MAX                            = 6,
};

enum class EHapticEffectType : uint8
{
	HET_MenuTick                   = 0,
	HET_MenuSelection              = 1,
	HET_RadialTick                 = 2,
	HET_RadialSelection            = 3,
	HET_MenuAnalogSweep            = 4,
	HET_StatLevelUp                = 5,
	HET_StructureFail              = 6,
	HET_StructureSuccess           = 7,
	HET_StructureDestroy           = 8,
	HET_StructureFlip              = 9,
	HET_ResourceGather             = 10,
	HET_EnterWater                 = 11,
	HET_StartFlying                = 12,
	HET_Explosion                  = 13,
	HET_BossTeleport               = 14,
	HET_BigDinoWalking             = 15,
	HET_MAX                        = 16,
};

enum class ETriggerEffectType : uint8
{
	None                           = 0,
	Feedback                       = 1,
	Weapon                         = 2,
	Slope                          = 3,
	Vibration                      = 4,
	VibrationSlope                 = 5,
	ETriggerEffectType_MAX         = 6,
};

enum class EPrimalStatsValueTypes : uint8
{
	TotalShots                     = 0,
	Misses                         = 1,
	HitsStructure                  = 2,
	HitsDinoBody                   = 3,
	HitsDinoCritical               = 4,
	HitsPlayerBody                 = 5,
	HitsPlayerCritical             = 6,
	MAX                            = 7,
};

enum class EPrimalGDKStat : uint8
{
	CreatureTamed                  = 0,
	KilledSurvivor                 = 1,
	PlayerDied                     = 2,
	PunchedTrees                   = 3,
	EPrimalGDKStat_MAX             = 4,
};

enum class EAimAssistType : uint8
{
	Off                            = 0,
	TargetingOn                    = 1,
	RangeWeaponAlwaysOn            = 2,
	EAimAssistType_MAX             = 3,
};

enum class EMissionState : uint8
{
	ServerSetup                    = 0,
	Activated                      = 1,
	Suspended                      = 2,
	Deactivated                    = 3,
	EMissionState_MAX              = 4,
};

enum class EGamePhase : uint8
{
	None                           = 0,
	Lobby_SOTF                     = 1,
	Match_SOTF                     = 2,
	EGamePhase_MAX                 = 3,
};

enum class EMissionTimerMode : uint8
{
	HideTimer                      = 0,
	ShowTimeRemaining              = 1,
	ShowTimeElapsed                = 2,
	UseBPGetMissionTimerText       = 3,
	EMissionTimerMode_MAX          = 4,
};

enum class ESpawnPattern : uint8
{
	Circle                         = 0,
	Grid                           = 1,
	Random                         = 2,
	ESpawnPattern_MAX              = 3,
};

enum class EMissionRelatedPropertyUsage : uint8
{
	Prefix                         = 0,
	Suffix                         = 1,
	Description                    = 2,
	EMissionRelatedPropertyUsage_MAX = 3,
};

enum class EMissionRelatedPropertyType : uint8
{
	Name_PropertyType              = 0,
	String_PropertyType            = 1,
	Boolean_PropertyType           = 2,
	Integer_PropertyType           = 3,
	Float_PropertyType             = 4,
	Double_PropertyType            = 5,
	EMissionRelatedPropertyType_MAX = 6,
};

enum class ESTOFNotificationType : uint8
{
	Death                          = 0,
	TribeEliminated                = 1,
	MatchVictory                   = 2,
	MatchDraw                      = 3,
	MAX                            = 4,
};

enum class EPrimalARKTributeDataType : uint8
{
	Items                          = 0,
	TamedDinos                     = 1,
	CharacterData                  = 2,
	MAX                            = 3,
};

enum class EPrimalCharacterStatusValue : uint8
{
	Health                         = 0,
	Stamina                        = 1,
	Torpidity                      = 2,
	Oxygen                         = 3,
	Food                           = 4,
	Water                          = 5,
	Temperature                    = 6,
	Weight                         = 7,
	MeleeDamageMultiplier          = 8,
	SpeedMultiplier                = 9,
	TemperatureFortitude           = 10,
	CraftingSpeedMultiplier        = 11,
	MAX                            = 12,
};

enum class EBoolExecResult : uint8
{
	Success                        = 0,
	Failed                         = 1,
	EBoolExecResult_MAX            = 2,
};

enum class ECameraStyle : uint8
{
	Default                        = 0,
	FirstPerson                    = 1,
	ThirdPerson                    = 2,
	FreeCam                        = 3,
	Orbit                          = 4,
	Spectator                      = 5,
	ECameraStyle_MAX               = 6,
};

enum class ETargetingTeamBehavior : uint8
{
	ExactMatch                     = 0,
	FriendlyWith                   = 1,
	PrioritizeButIncludeAny        = 2,
	ETargetingTeamBehavior_MAX     = 3,
};

enum class EChatMessageType : uint8
{
	MyMessage                      = 0,
	SameTeamMessage                = 1,
	DifferentTeamMessage           = 2,
	SystemWideMessage              = 3,
	SameAllianceMessage            = 4,
	AdminMessage                   = 5,
	MAX                            = 6,
};

enum class EChatType : uint8
{
	GlobalChat                     = 0,
	ProximityChat                  = 1,
	RadioChat                      = 2,
	GlobalTribeChat                = 3,
	AllianceChat                   = 4,
	MAX                            = 5,
};

enum class EChatSendMode : uint8
{
	GlobalChat                     = 0,
	GlobalTribeChat                = 1,
	LocalChat                      = 2,
	AllianceChat                   = 3,
	MAX                            = 4,
};

enum class EShooterPhysMaterialType : uint8
{
	Unknown                        = 0,
	Concrete                       = 1,
	Dirt                           = 2,
	Water                          = 3,
	Metal                          = 4,
	Wood                           = 5,
	Grass                          = 6,
	Glass                          = 7,
	Flesh                          = 8,
	Leaves                         = 9,
	Rock                           = 10,
	Sand                           = 11,
	Snow                           = 12,
	Corruption                     = 13,
	Lava                           = 14,
	Acid                           = 15,
	MAX                            = 16,
};

enum class EPlayerActionIndex : uint8
{
	None                           = 0,
	WhistleFollow                  = 1,
	WhistleFollowOne               = 2,
	WhistleStop                    = 3,
	WhistleStopOne                 = 4,
	WhistleAggressive              = 5,
	WhistleNeutral                 = 6,
	WhistlePassive                 = 7,
	WhistlePassiveFlee             = 8,
	WhistleAttackTarget            = 9,
	WhistleAttackThisTarget        = 10,
	WhistleLandFlyerOne            = 11,
	ShowInventory                  = 12,
	ShowCraftables                 = 13,
	ShowTribeManager               = 14,
	Poop                           = 15,
	UnHideCompanion                = 16,
	ShowEmoteSelection             = 17,
	Back_WhistleList               = 18,
	Emote_HatSwitch                = 19,
	Emote_Salute                   = 20,
	Emote_Sorry                    = 21,
	Emote_Thank                    = 22,
	Emote_Wave                     = 23,
	Emote_Laugh                    = 24,
	Emote_Yes                      = 25,
	Emote_No                       = 26,
	Emote_Taunt                    = 27,
	Emote_Cheer                    = 28,
	Emote_FriendlyLowerHands       = 29,
	Emote_MAX                      = 30,
	EPlayerActionIndex_MAX         = 31,
};

enum class EMissionAlertType : uint8
{
	Positive                       = 0,
	Neutral                        = 1,
	Negative                       = 2,
	EMissionAlertType_MAX          = 3,
};

enum class EPhaseRequirementWidgetVisualState : uint8
{
	Neutral                        = 0,
	Positive                       = 1,
	Negative                       = 2,
	Custom                         = 3,
	EPhaseRequirementWidgetVisualState_MAX = 4,
};

enum class ELootItemType : uint8
{
	None                           = 0,
	Element                        = 1,
	Hexagons                       = 2,
	ResourceCommon                 = 3,
	ResourceUncommon               = 4,
	ResourceRare                   = 5,
	ArmorTier1                     = 6,
	ArmorTier2                     = 7,
	ArmorTier3                     = 8,
	ArmorTek                       = 9,
	WeaponTier1                    = 10,
	WeaponTier2                    = 11,
	WeaponTier3                    = 12,
	WeaponTek                      = 13,
	AmmoTier1                      = 14,
	AmmoTier2                      = 15,
	AmmoTier3                      = 16,
	Saddle                         = 17,
	ELootItemType_MAX              = 18,
};

enum class ESimpleCurve : uint8
{
	Linear                         = 0,
	Pow0_5                         = 1,
	Pow1_0                         = 2,
	Pow1_5                         = 3,
	Pow2_0                         = 4,
	Pow2_5                         = 5,
	Pow3_0                         = 6,
	Pow3_5                         = 7,
	PowCos0_5                      = 8,
	PowCos1_0                      = 9,
	PowCos1_5                      = 10,
	PowCos2_0                      = 11,
	PowCos2_5                      = 12,
	PowCos3_0                      = 13,
	PowCos3_5                      = 14,
	PowSin0_5                      = 15,
	PowSin1_0                      = 16,
	PowSin1_5                      = 17,
	PowSin2_0                      = 18,
	PowSin2_5                      = 19,
	PowSin3_0                      = 20,
	PowSin3_5                      = 21,
	PowMinCos0_5                   = 22,
	PowMinCos1_0                   = 23,
	PowMinCos1_5                   = 24,
	PowMinCos2_0                   = 25,
	PowMinCos2_5                   = 26,
	PowMinCos3_0                   = 27,
	PowMinCos3_5                   = 28,
	PowMax0_5                      = 29,
	PowMax1_0                      = 30,
	PowMax1_5                      = 31,
	PowMax2_0                      = 32,
	PowMax2_5                      = 33,
	PowMax3_0                      = 34,
	PowMax3_5                      = 35,
	ESimpleCurve_MAX               = 36,
};

enum class EHUDElementType : uint8
{
	Text                           = 0,
	ProgressBar                    = 1,
	Image                          = 2,
	EHUDElementType_MAX            = 3,
};

enum class EHUDElementAnchorMode : uint8
{
	Specified                      = 0,
	QuickbarLeft                   = 1,
	QuickbarRight                  = 2,
	QuickbarTop                    = 3,
	EHUDElementAnchorMode_MAX      = 4,
};

enum class EStencilAlliance : uint8
{
	None                           = 0,
	Friendly                       = 1,
	NPC                            = 2,
	NPCFleeing                     = 3,
	Hostile                        = 4,
	Ally                           = 5,
	Element                        = 6,
	EStencilAlliance_MAX           = 7,
};

enum class EHUDElementHorizontalAlignment : uint8
{
	Center                         = 0,
	Left                           = 1,
	Right                          = 2,
	EHUDElementHorizontalAlignment_MAX = 3,
};

enum class EHUDElementVerticalAlignment : uint8
{
	Center                         = 0,
	Top                            = 1,
	Bottom                         = 2,
	EHUDElementVerticalAlignment_MAX = 3,
};

enum class ELeaderboardColumnName : uint8
{
	MissionTag                     = 0,
	PlayerNetId                    = 1,
	TribeId                        = 2,
	TimestampUtc                   = 3,
	FloatValue                     = 4,
	IntValue                       = 5,
	NameValue                      = 6,
	StringValue                    = 7,
	ELeaderboardColumnName_MAX     = 8,
};

enum class ELeaderboardGroupByMode : uint8
{
	None                           = 0,
	First                          = 1,
	Min                            = 2,
	Max                            = 3,
	Sum                            = 4,
	Count                          = 5,
	Average                        = 6,
};

enum class ELeaderboardOrdering : uint8
{
	Ascending                      = 0,
	Descending                     = 1,
	ELeaderboardOrdering_MAX       = 2,
};

enum class EMassTeleportState : uint8
{
	INITIATED                      = 0,
	TRIGGERED_SUCCESS              = 1,
	TRIGGERED_FAILED               = 2,
	COMPLETED                      = 3,
	CANCELLED                      = 4,
	EMassTeleportState_MAX         = 5,
};

enum class EDLCSelector : uint8
{
	DLCScorchedEarth               = 0,
	DLCAberration                  = 1,
	DLCExtinction                  = 2,
	DLCCrystalIsles                = 3,
	DLCGenesis                     = 4,
	DLCGen2                        = 5,
	DLCTheCenter                   = 6,
	DLCRagnarok                    = 7,
	DLCLostIsland                  = 8,
	DLCValguero                    = 9,
	DLCFjordur                     = 10,
	DLCSelectorMax                 = 11,
	EDLCSelector_MAX               = 12,
};

enum class EDinoInputAction : uint8
{
	Fire                           = 0,
	Target                         = 1,
	Crouch                         = 2,
	EDinoInputAction_MAX           = 3,
};

enum class ECameraSetting_BoolCondition : uint8
{
	Dont_Care                      = 0,
	Yes                            = 1,
	No                             = 2,
	ECameraSetting_MAX             = 3,
};

enum class ECDOArrayModificationType : uint8
{
	MODIFY                         = 0,
	ADD                            = 1,
	REMOVE                         = 2,
	REPLACE_TARRAY                 = 3,
	ECDOArrayModificationType_MAX  = 4,
};

enum class ETrackedActorCategory : uint8
{
	NoCategory                     = 0,
	Creatures                      = 1,
	Allies                         = 2,
	Teammates                      = 3,
	MAX                            = 4,
};

enum class EFieldActivationType_New : uint8
{
	Delay                          = 0,
	OnTick                         = 1,
	OnTickWithDelay                = 2,
	Trigger                        = 3,
	MAX                            = 4,
};

enum class EPrimalCameraState : uint8
{
	OLD_CAMERA                     = 0,
	ASA_CAMERA                     = 1,
	NORMAL_INTERP_TO_OLD_CAMERA    = 2,
	NORMAL_INTERP_TO_ASA_CAMERA    = 3,
	WAITING_TO_SWITCH_TO_OLD_CAMERA_SLOW = 4,
	SLOW_INTERP_TO_OLD_CAMERA      = 5,
	EPrimalCameraState_MAX         = 6,
};

enum class EWeaponState : uint8
{
	Idle                           = 0,
	Firing                         = 1,
	Reloading                      = 2,
	Equipping                      = 3,
	UnEquipping                    = 4,
	EWeaponState_MAX               = 5,
};

enum class EWeaponAmmoReloadState : uint8
{
	Playing_Anim                   = 0,
	Waiting_For_Ammo               = 1,
	Ready                          = 2,
	EWeaponAmmoReloadState_MAX     = 3,
};

enum class EDomeState : uint8
{
	NotADome                       = 0,
	Inside                         = 1,
	Outside                        = 2,
	EDomeState_MAX                 = 3,
};

enum class EHubSubMenu : uint8
{
	Inventory                      = 0,
	Engrams                        = 1,
	TribeManager                   = 2,
	TrackedDinoList                = 3,
	SurvivalProfile                = 4,
	MissionList                    = 5,
	Minimap                        = 6,
	MAX                            = 7,
};

enum class EDropItemIconAction : uint8
{
	DA_NoAction                    = 0,
	DA_Equip                       = 1,
	DA_UnEquip                     = 2,
	DA_AddToSlot                   = 3,
	DA_RemoveFromSlot              = 4,
	DA_ToRemoteInv                 = 5,
	DA_FromRemoteInv               = 6,
	DA_RemoteEquip                 = 7,
	DA_MergeItemStack              = 8,
	DA_SplitItemStack              = 9,
	DA_SwapItems                   = 10,
	DA_UseWithItem                 = 11,
	DA_UnEquipTransferToLocal      = 12,
	DA_RemoveItemSkin              = 13,
	DA_SplitItemStackOne           = 14,
	DA_RemoveWeaponAmmo            = 15,
	DA_FromRemoteInvToSlot         = 16,
	DA_ToRemoteInvFromSlot         = 17,
	DA_EquipLocalFromRemote        = 18,
	DA_EquipRemoteFromLocal        = 19,
	DA_UnequipRemote               = 20,
	DA_UnequipTransferToRemote     = 21,
	DA_ToArkInv                    = 22,
	DA_FromArkInv                  = 23,
	DA_AddCustomCosmetic           = 24,
	MAX                            = 25,
};

enum class EListDisplay : uint8
{
	MISSIONS                       = 0,
	EFFECTS                        = 1,
	EListDisplay_MAX               = 2,
};

enum class EDataDisplay : uint8
{
	MISSION_INFO                   = 0,
	LEADERBOARDS                   = 1,
	EDataDisplay_MAX               = 2,
};

enum class EServerOctreeGroup : uint8
{
	STASISCOMPONENTS               = 0,
	PLAYERPAWNS                    = 1,
	DINOPAWNS                      = 2,
	PAWNS                          = 3,
	STRUCTURES                     = 4,
	TARGETABLEACTORS               = 5,
	PLAYERS_CONNECTED              = 6,
	SPATIALNETWORKEDACTORS         = 7,
	SPATIALNETWORKEDACTORS_DORMANT = 8,
	ALL_SPATIAL                    = 9,
	THERMALSTRUCTURES              = 10,
	STRUCTURES_CORE                = 11,
	DINOPAWNS_TAMED                = 12,
	PLAYERS_AND_TAMED_DINOS        = 13,
	PLAYERS_CONNECTED_AND_TAMED_DINOS = 14,
	DINOFOODCONTAINER              = 15,
	GRENADES                       = 16,
	TREESAPTAPS                    = 17,
	LARGEUNSTASISRANGE             = 18,
	TRAPS                          = 19,
	MAX                            = 20,
};

enum class EEditorMessageLogLevel : uint8
{
	Error                          = 0,
	Warning                        = 1,
	Info                           = 2,
	Success                        = 3,
	EEditorMessageLogLevel_MAX     = 4,
};

enum class EPlayMovieVolumeType : uint8
{
	Default                        = 0,
	Music                          = 1,
	Character                      = 2,
	Voice                          = 3,
	EPlayMovieVolumeType_MAX       = 4,
};

enum class EColorChannelTarget : uint8
{
	Red                            = 0,
	Green                          = 1,
	Blue                           = 2,
	Alpha                          = 3,
	All                            = 4,
	EColorChannelTarget_MAX        = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.SoundWaveAnimTexturePairs
struct FSoundWaveAnimTexturePairs
{
public:
	struct FSoftObjectPath                       LocalizedSoundWave;                                // 0x0(0x20)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FSoftObjectPath                       MatchingAnimTexture;                               // 0x20(0x20)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.LocalizedSoundWaveAnimTexturePairArrays
struct FLocalizedSoundWaveAnimTexturePairArrays
{
public:
	class FString                                TwoLetterISOLanguageName;                          // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	TArray<struct FSoundWaveAnimTexturePairs>    SoundWaveAnimTexturePairs;                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.CompanionReactionData
struct FCompanionReactionData
{
public:
	int32                                        ReactionPriority;                                  // 0x0(0x4)(BlueprintVisible, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        ReactionType;                                      // 0x4(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_503D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ReactionTimePadding_Start;                         // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ReactionTimePadding_End;                           // 0xC(0x4)(ConstParm, Parm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ForceReactionDuration;                             // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_503E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UAnimMontage*                          ReactionAnim;                                      // 0x18(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ReactionStartDelay_Anim;                           // 0x20(0x4)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ReactionForceDuration_Anim;                        // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class UParticleSystem*                       ReactionVFX;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ReactionStartDelay_VFX;                            // 0x30(0x4)(Edit, EditFixedSize, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ReactionForceDuration_VFX;                         // 0x34(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FSoftObjectPath>               ReactionSFXArray;                                  // 0x38(0x10)(ConstParm, ExportObject, Net, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ReactionStartDelay_SFX;                            // 0x48(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ReactionForceDuration_SFX;                         // 0x4C(0x4)(BlueprintReadOnly, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        bReactionIsMonologue : 1;                          // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsReactionPlaying : 1;                            // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsReactionPlaying_Anim : 1;                       // Mask: 0x4, PropSize: 0x10x50(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsReactionPlaying_VFX : 1;                        // Mask: 0x8, PropSize: 0x10x50(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsReactionPlaying_SFX : 1;                        // Mask: 0x10, PropSize: 0x10x50(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3EA : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5041[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ReactionStartTime;                                 // 0x58(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	double                                       ReactionEndTime;                                   // 0x60(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        RequiredSecondsSincePreviousReactionInOrderToBePlayed; // 0x68(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bDontCancelWhenGreaterOrEqualPriorityPlays : 1;    // Mask: 0x1, PropSize: 0x10x6C(0x1)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3EB : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5043[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ChanceToOccur;                                     // 0x70(0x4)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5044[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSoftObjectPath                       FallbackSharedAnimTexture;                         // 0x78(0x20)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	TArray<struct FLocalizedSoundWaveAnimTexturePairArrays> LocalizedSoundWaves;                               // 0x98(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        ExplorerNoteIndexToUnlock;                         // 0xA8(0x4)(EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5046[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ShooterGame.TribeGovernment
struct FTribeGovernment
{
public:
	int32                                        TribeGovern_PINCode;                               // 0x0(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        TribeGovern_DinoOwnership;                         // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        TribeGovern_StructureOwnership;                    // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        TribeGovern_DinoTaming;                            // 0xC(0x4)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        TribeGovern_DinoUnclaimAdminOnly;                  // 0x10(0x4)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ShooterGame.ArkTributeEntity
struct FArkTributeEntity
{
public:
	int32                                        UploadTime;                                        // 0x0(0x4)(Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x11C (0x120 - 0x4)
// ScriptStruct ShooterGame.ArkTributePlayerData
struct FArkTributePlayerData : public FArkTributeEntity
{
public:
	uint8                                        Pad_5049[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	uint64                                       PlayerDataID;                                      // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<uint8>                                PlayerDataBytes;                                   // 0x10(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FString                                PlayerName;                                        // 0x20(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class FString                                PlayerStats[0xC];                                  // 0x30(0xC0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FString                                UploadingServerMapName;                            // 0xF0(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FString                                UploadingServerName;                               // 0x100(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         bWasAllowDPCUpload;                                // 0x110(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         bWithItems;                                        // 0x111(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_504C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint32                                       ItemCount;                                         // 0x114(0x4)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         bForServerTransfer;                                // 0x118(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_504D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Version;                                           // 0x11C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.ItemNetID
struct FItemNetID
{
public:
	uint32                                       ItemID1;                                           // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance)
	uint32                                       ItemID2;                                           // 0x4(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.CustomItemByteArray
struct FCustomItemByteArray
{
public:
	TArray<uint8>                                Bytes;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.CustomItemByteArrays
struct FCustomItemByteArrays
{
public:
	TArray<struct FCustomItemByteArray>          ByteArrays;                                        // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.CustomItemDoubles
struct FCustomItemDoubles
{
public:
	TArray<double>                               Doubles;                                           // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.CustomItemData
struct FCustomItemData
{
public:
	class FName                                  CustomDataName;                                    // 0x0(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<class FString>                        CustomDataStrings;                                 // 0x8(0x10)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<float>                                CustomDataFloats;                                  // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<class UObject*>                       CustomDataObjects;                                 // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        CustomDataClasses;                                 // 0x38(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<class FName>                          CustomDataNames;                                   // 0x48(0x10)(Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FCustomItemByteArrays                 CustomDataBytes;                                   // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FCustomItemDoubles                    CustomDataDoubles;                                 // 0x68(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.CraftingResourceRequirement
struct FCraftingResourceRequirement
{
public:
	float                                        BaseResourceRequirement;                           // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_504F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ResourceItemType;                                  // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         bCraftingRequireExactResourceType;                 // 0x10(0x1)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5050[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DinoAncestorsEntry
struct FDinoAncestorsEntry
{
public:
	class FString                                MaleName;                                          // 0x0(0x10)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint32                                       MaleDinoID1;                                       // 0x10(0x4)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint32                                       MaleDinoID2;                                       // 0x14(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FString                                FemaleName;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint32                                       FemaleDinoID1;                                     // 0x28(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint32                                       FemaleDinoID2;                                     // 0x2C(0x4)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct ShooterGame.ItemNetInfo
struct FItemNetInfo
{
public:
	class UClass*                                ItemArchetype;                                     // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Config, GlobalConfig, SubobjectReference)
	struct FItemNetID                            ItemID;                                            // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance)
	uint32                                       ItemQuantity;                                      // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        CustomItemID;                                      // 0x14(0x4)(ExportObject, BlueprintReadOnly, OutParm, Config, GlobalConfig, SubobjectReference)
	int32                                        SlotIndex;                                         // 0x18(0x4)(ConstParm, BlueprintReadOnly, OutParm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5054[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        CustomCosmeticModSkinReplacementID;                // 0x20(0x8)(OutParm, Config, GlobalConfig, SubobjectReference)
	int32                                        CustomCosmeticModSkinVariantID;                    // 0x28(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5055[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CustomCosmeticModSkinReplacementOriginalClass;     // 0x30(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	double                                       CreationTime;                                      // 0x38(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	class FString                                CustomItemName;                                    // 0x40(0x10)(Edit, ExportObject, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	class FString                                CustomItemDescription;                             // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Config, GlobalConfig, SubobjectReference)
	double                                       UploadEarliestValidTime;                           // 0x60(0x8)(BlueprintReadOnly, Net, Parm, Config, GlobalConfig, SubobjectReference)
	TArray<uint64>                               SteamUserItemID;                                   // 0x68(0x10)(Edit, ConstParm, BlueprintVisible, Net, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsBlueprint : 1;                                  // Mask: 0x1, PropSize: 0x10x78(0x1)(Net, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsEngram : 1;                                     // Mask: 0x2, PropSize: 0x10x78(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsCustomRecipe : 1;                               // Mask: 0x4, PropSize: 0x10x78(0x1)(Edit, BlueprintReadOnly, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsFoodRecipe : 1;                                 // Mask: 0x8, PropSize: 0x10x78(0x1)(Edit, ExportObject, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsRepairing : 1;                                  // Mask: 0x10, PropSize: 0x10x78(0x1)(ConstParm, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bAllowRemovalFromInventory : 1;                    // Mask: 0x20, PropSize: 0x10x78(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, GlobalConfig, SubobjectReference)
	uint8                                        bHideFromInventoryDisplay : 1;                     // Mask: 0x40, PropSize: 0x10x78(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Config, GlobalConfig, SubobjectReference)
	uint8                                        bAllowRemovalFromSteamInventory : 1;               // Mask: 0x80, PropSize: 0x10x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, GlobalConfig, SubobjectReference)
	uint8                                        bFromSteamInventory : 1;                           // Mask: 0x1, PropSize: 0x10x79(0x1)(ConstParm, ExportObject, EditFixedSize, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsFromAllClustersInventory : 1;                   // Mask: 0x2, PropSize: 0x10x79(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Config, GlobalConfig, SubobjectReference)
	uint8                                        bForcePreventGrinding : 1;                         // Mask: 0x4, PropSize: 0x10x79(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsEquipped : 1;                                   // Mask: 0x8, PropSize: 0x10x79(0x1)(ExportObject, Net, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsSlot : 1;                                       // Mask: 0x10, PropSize: 0x10x79(0x1)(Edit, ConstParm, Net, Config, GlobalConfig, SubobjectReference)
	uint8                                        bIsInitialItem : 1;                                // Mask: 0x20, PropSize: 0x10x79(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3EC : 2;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5059[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint16                                       CraftQueue;                                        // 0x7C(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_505B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       NextCraftCompletionTime;                           // 0x80(0x8)(ExportObject, Config, GlobalConfig, SubobjectReference)
	float                                        CraftingSkill;                                     // 0x88(0x4)(Config, GlobalConfig, SubobjectReference)
	float                                        CraftedSkillBonus;                                 // 0x8C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FString                                CrafterCharacterName;                              // 0x90(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FString                                CrafterTribeName;                                  // 0xA0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint32                                       WeaponClipAmmo;                                    // 0xB0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ItemDurability;                                    // 0xB4(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ItemRating;                                        // 0xB8(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint32                                       ExpirationTimeUTC;                                 // 0xBC(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        ItemQualityIndex;                                  // 0xC0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_505E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ItemCustomClass;                                   // 0xC8(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint16                                       ItemStatValues[0x8];                               // 0xD0(0x10)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int16                                        ItemColorID[0x6];                                  // 0xE0(0xC)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5060[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ItemSkinTemplate;                                  // 0xF0(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FCustomItemData>               CustomItemDatas;                                   // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FColor>                        CustomItemColors;                                  // 0x108(0x10)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FCraftingResourceRequirement>  CustomResourceRequirements;                        // 0x118(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	double                                       NextSpoilingTime;                                  // 0x128(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	double                                       LastSpoilingTime;                                  // 0x130(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint64                                       OwnerPlayerDataId;                                 // 0x138(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class AShooterCharacter>      LastOwnerPlayer;                                   // 0x140(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	double                                       LastAutoDurabilityDecreaseTime;                    // 0x148(0x8)(ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance)
	float                                        ItemStatClampsMultiplier;                          // 0x150(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5062[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OriginalItemDropLocation;                          // 0x158(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int16                                        PreSkinItemColorID[0x6];                           // 0x170(0xC)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        EggNumberOfLevelUpPointsApplied[0xC];              // 0x17C(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        EggNumberMutationsApplied[0xC];                    // 0x188(0xC)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        EggTamedIneffectivenessModifier;                   // 0x194(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        EggColorSetIndices[0x6];                           // 0x198(0x6)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5064[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        EggGenderOverride;                                 // 0x1A0(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        ItemVersion;                                       // 0x1A4(0x1)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5065[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ClusterSpoilingTimeUTC;                            // 0x1A8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FDinoAncestorsEntry>           EggDinoAncestors;                                  // 0x1B0(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FDinoAncestorsEntry>           EggDinoAncestorsMale;                              // 0x1C0(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        EggRandomMutationsFemale;                          // 0x1D0(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        EggRandomMutationsMale;                            // 0x1D4(0x4)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        ItemProfileVersion;                                // 0x1D8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         bNetInfoFromClient;                                // 0x1D9(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5067[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.IntArray
struct FIntArray
{
public:
	TArray<int32>                                Array;                                             // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.StringArray
struct FStringArray
{
public:
	TArray<class FString>                        Array;                                             // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.AhoCorasickState
struct FAhoCorasickState
{
public:
	uint8                                        Pad_507D[0x50];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        Failure;                                           // 0x50(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_507F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                Goto;                                              // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.AhoCorasickMatcher
struct FAhoCorasickMatcher
{
public:
	TArray<struct FAhoCorasickState>             States;                                            // 0x0(0x10)(ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxC;                                              // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5080[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.PlayerAllClustersInventory
struct FPlayerAllClustersInventory
{
public:
	uint8                                        Pad_5081[0x38];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_ApplyBoneMods
struct FAnimNode_ApplyBoneMods : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_5082[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_FemaleBoneMods
struct FAnimNode_FemaleBoneMods : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_5083[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_FixVirtualBones
struct FAnimNode_FixVirtualBones : public FAnimNode_SkeletalControlBase
{
public:
	bool                                         bIgnoreOnDedicatedServer;                          // 0xC8(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowUpdatingOutsideOfGameWorld;                  // 0xC9(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5085[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FBoneReference>                VirtualBonesToFix;                                 // 0xD0(0x10)(BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FBoneReference>                VirtualBoneTargets;                                // 0xE0(0x10)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x150 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_GroundBones
struct FAnimNode_GroundBones : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        bDebug : 1;                                        // Mask: 0x1, PropSize: 0x10xC8(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5086[0x87];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0xD0 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_ModifyBones
struct FAnimNode_ModifyBones : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_5087[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0xD8 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_MultiFabrik
struct FAnimNode_MultiFabrik : public FAnimNode_SkeletalControlBase
{
public:
	float                                        Precision;                                         // 0xC8(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableDebugDraw;                                  // 0xCC(0x1)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_508A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  NodeName;                                          // 0xD0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct ShooterGame.AnimNode_MultiFabrik_Dinos
struct FAnimNode_MultiFabrik_Dinos : public FAnimNode_SkeletalControlBase
{
public:
	float                                        Precision;                                         // 0xC8(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEnableDebugDraw;                                  // 0xCC(0x1)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_508C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RootOffset;                                        // 0xD0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_508D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              RootRotationOffset;                                // 0xD8(0x18)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bInitOffset;                                       // 0xF0(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_508E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.TransactionLogData
struct FTransactionLogData
{
public:
	uint8                                        Pad_508F[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.BattleTribeData
struct FBattleTribeData
{
public:
	class FString                                TribeName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	int32                                        TribeID;                                           // 0x10(0x4)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5091[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.BattlePlayerData
struct FBattlePlayerData
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	bool                                         bConnected;                                        // 0x10(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAlive;                                            // 0x11(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5093[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        TribeID;                                           // 0x14(0x4)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	int32                                        PlayerID;                                          // 0x18(0x4)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5095[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ShooterGame.PrimalPlayerCharacterConfigStructReplicated
struct FPrimalPlayerCharacterConfigStructReplicated
{
public:
	uint8                                        bIsFemale : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        BitPad_3ED : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5097[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          BodyColors[0x4];                                   // 0x4(0x40)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5098[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PlayerCharacterName;                               // 0x48(0x10)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        FacialHairIndex;                                   // 0x58(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        HeadHairIndex;                                     // 0x59(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        EyebrowIndex;                                      // 0x5A(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5099[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PercentOfFullHeadHairGrowth;                       // 0x5C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PercentOfFullFacialHairGrowth;                     // 0x60(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RawBoneModifiers[0x1A];                            // 0x64(0x68)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PlayerSpawnRegionIndex;                            // 0xCC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        OverrideHeadHairColor[0x2];                        // 0xD0(0x2)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        OverrideFacialHairColor[0x2];                      // 0xD2(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        DynamicMaterialBytes[0x32];                        // 0xD4(0x32)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_509B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        PlayerVoiceCollectionIndex;                        // 0x108(0x4)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUsingCustomPlayerVoiceCollection : 1;             // Mask: 0x1, PropSize: 0x10x10C(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_509C[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ShooterGame.PlayerDeathNotification
struct FPlayerDeathNotification
{
public:
	class FString                                PlayerDeathStringEnemy;                            // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PlayerDeathStringAlly;                             // 0x10(0x10)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PlayerDeathStringYou;                              // 0x20(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DeathReason;                                       // 0x30(0x10)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        DeadPlayerNames;                                   // 0x40(0x10)(Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsTribeDeath;                                     // 0x50(0x1)(Edit, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_509F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DeathTribeName;                                    // 0x58(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TargetingTeam;                                     // 0x68(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_50A0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        LinkedPlayerID;                                    // 0x70(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData;                                       // 0x78(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ShooterGame.BiomeZoneImpactEffect
struct FBiomeZoneImpactEffect
{
public:
	class UClass*                                SpawnActors[0x10];                                 // 0x0(0x80)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.DecalData
struct FDecalData
{
public:
	class UMaterialInterface*                    DecalMaterial;                                     // 0x0(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DecalSize;                                         // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DecalDepth;                                        // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DecalImpactNormalOffset;                           // 0x10(0x4)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LifeSpan;                                          // 0x14(0x4)(BlueprintVisible, Net, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        RandomAngleRange;                                  // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50A5[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.BiomeZoneVolumeEffect
struct FBiomeZoneVolumeEffect
{
public:
	enum class EBiomeZone                        BiomeZone;                                         // 0x0(0x1)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50A6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UParticleSystem*                       ParticleSystem;                                    // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig)
	struct FDecalData                            DecalData;                                         // 0x10(0x20)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        bIsImpactEffect : 1;                               // Mask: 0x1, PropSize: 0x10x30(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsNonImpactEffect : 1;                            // Mask: 0x2, PropSize: 0x10x30(0x1)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsUnderwaterEffect : 1;                           // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDecalUniformSize : 1;                             // Mask: 0x8, PropSize: 0x10x30(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3EE : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50A8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Weight;                                            // 0x34(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	float                                        MinSpawnDistance;                                  // 0x38(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxSpawnDistance;                                  // 0x3C(0x4)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ScaleAtMinDistance;                                // 0x40(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ScaleAtMaxDistance;                                // 0x44(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.ShooterWeaponDBEntry
struct FShooterWeaponDBEntry
{
public:
	class UClass*                                WeaponAmmoItemTemplate;                            // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        WeaponConfig_AmmoPerClip;                          // 0x8(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        WeaponConfig_bShowAmmoInClipAsPercent : 1;         // Mask: 0x1, PropSize: 0x10xC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        WeaponConfig_bUsesAmmo : 1;                        // Mask: 0x2, PropSize: 0x10xC(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        WeaponConfig_bFullReloadFromSingleItem : 1;        // Mask: 0x4, PropSize: 0x10xC(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCanBeUsedAsEquipment : 1;                         // Mask: 0x8, PropSize: 0x10xC(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceAllowMountedWeaponry : 1;                    // Mask: 0x10, PropSize: 0x10xC(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowUseWhileRidingDino : 1;                      // Mask: 0x20, PropSize: 0x10xC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForcePreventUseWhileRidingDino : 1;               // Mask: 0x40, PropSize: 0x10xC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyUseOnSeatingStructure : 1;                    // Mask: 0x80, PropSize: 0x10xC(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowUseOnSeatingStructure : 1;                   // Mask: 0x1, PropSize: 0x10xD(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyAllowUseWhenRidingDino : 1;                   // Mask: 0x2, PropSize: 0x10xD(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseBPCanEquip : 1;                                // Mask: 0x4, PropSize: 0x10xD(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDontActuallyConsumeItemAmmo : 1;                  // Mask: 0x8, PropSize: 0x10xD(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventEquippingUnderwater : 1;                   // Mask: 0x10, PropSize: 0x10xD(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3EF : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50B0[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MeleeAttackUsableHarvestDamageMultiplier;          // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50B1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                MeleeAttackUsableHarvestDamageType;                // 0x18(0x8)(Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                MeleeDamageType;                                   // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ItemDurabilityToConsumePerMeleeHit;                // 0x28(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MeleeDamageAmount;                                 // 0x2C(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class AShooterProjectile>      ProjectileClass;                                   // 0x30(0x30)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSet<TSoftClassPtr<class AShooterWeapon>>    IsChildClassOf;                                    // 0x60(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.PrimalDinoDBEntry
struct FPrimalDinoDBEntry
{
public:
	TSet<TSoftClassPtr<class APrimalDinoCharacter>> ParentClassTree;                                   // 0x0(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  DinoNameTag;                                       // 0x50(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NPCZoneVolumeCountWeight;                          // 0x58(0x4)(ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CapsuleHalfHeight;                                 // 0x5C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        CapsuleWaterDepthMultiplier;                       // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CapsuleRadius;                                     // 0x64(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UnnetworkedStasisMultiplier;                       // 0x68(0x4)(Net, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MeleeDamageAmount;                                 // 0x6C(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUsesGender : 1;                                   // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCanBeTorpid : 1;                                  // Mask: 0x2, PropSize: 0x10x70(0x1)(ConstParm, BlueprintReadOnly, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsWaterDino : 1;                                  // Mask: 0x4, PropSize: 0x10x70(0x1)(Edit, ConstParm, ExportObject, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsAmphibious : 1;                                 // Mask: 0x8, PropSize: 0x10x70(0x1)(Edit, ConstParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50B5[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ShooterGame.PrimalStructureDBEntry
struct FPrimalStructureDBEntry
{
public:
	uint8                                        bTraceThruEncroachmentPoints : 1;                  // Mask: 0x1, PropSize: 0x10x0(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSpawnCrateOnTopOfStructures : 1;                  // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.PrimalInventoryDBEntry
struct FPrimalInventoryDBEntry
{
public:
	class FString                                InventoryNameOverride;                             // 0x0(0x10)(Edit, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct ShooterGame.PrimalMissionDBEntry
struct FPrimalMissionDBEntry
{
public:
	bool                                         bUsesFallbackSeeds;                                // 0x0(0x1)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct ShooterGame.CustomButtonWidgetStyle
struct FCustomButtonWidgetStyle : public FSlateWidgetStyle
{
public:
	struct FLinearColor                          NormalChildTintColor;                              // 0x8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          HoveredChildTintColor;                             // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          PressedChildTintColor;                             // 0x28(0x10)(Edit, ConstParm, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          DisabledChildTintColor;                            // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DamageNegatingItem
struct FDamageNegatingItem
{
public:
	class UClass*                                ItemSubclass;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NegationFactor;                                    // 0x8(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50B7[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DataListEntryButtonBorderColors
struct FDataListEntryButtonBorderColors
{
public:
	struct FColor                                Normal;                                            // 0x0(0x4)(ConstParm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FColor                                Hovered;                                           // 0x4(0x4)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	struct FColor                                Pressed;                                           // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, GlobalConfig, SubobjectReference)
	struct FColor                                Disabled;                                          // 0xC(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PrimalFolderIcons
struct FPrimalFolderIcons
{
public:
	class UTexture2D*                            NormalFolder;                                      // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            CustomFolder;                                      // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Back;                                              // 0x10(0x8)(ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	struct FColor                                TextColor;                                         // 0x18(0x4)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_50B9[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ShooterGame.DeferredMovementTick
struct FDeferredMovementTick : public FTickFunction
{
public:
	uint8                                        Pad_50BB[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DeferredMove
struct FDeferredMove
{
public:
	TWeakObjectPtr<class UPrimalCharacterMovement> Component;                                         // 0x0(0x8)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	bool                                         bMoveEveryFrame;                                   // 0x8(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50BC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DeltaTime;                                         // 0xC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ShooterGame.AvoidanceArea
struct FAvoidanceArea
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FTransform                            Transform;                                         // 0x30(0x60)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm)
	struct FVector                               BoxExtents;                                        // 0x90(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SphereRadius;                                      // 0xA8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	uint8                                        Pad_50BF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CreationTime;                                      // 0xB0(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        bBlockBox : 1;                                     // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bBlockSphere : 1;                                  // Mask: 0x2, PropSize: 0x10xB8(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsDynamic : 1;                                    // Mask: 0x4, PropSize: 0x10xB8(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50C1[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.FlockPersistentData
struct FFlockPersistentData
{
public:
	float                                        AvoidanceAreaDecayRate;                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AvoidanceTraceInterval;                            // 0x4(0x4)(ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AvoidanceTraceInferredBoxSize;                     // 0x8(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AvoidanceTraceInferredSphereRadius;                // 0xC(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AvoidanceTraceForwardDistance;                     // 0x10(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AvoidanceTraceDownDistance;                        // 0x14(0x4)(ExportObject, Net, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastAvoidanceTraceTime;                            // 0x18(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxNumAvoidanceAreas;                              // 0x20(0x4)(Edit, BlueprintReadOnly, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50C2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FAvoidanceArea>                DynamicAvoidanceAreas;                             // 0x28(0x10)(Edit, BlueprintVisible, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.BoidBehavior
struct FBoidBehavior
{
public:
	TArray<struct FAvoidanceArea>                AvoidanceAreas;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DesiredSeparation;                                 // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NeighborDist;                                      // 0x14(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SeparationMultiplier;                              // 0x18(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AlignmentMultiplier;                               // 0x1C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CohesionMultiplier;                                // 0x20(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AvoidanceMultiplier;                               // 0x24(0x4)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TargetingMultiplier;                               // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxDistanceToLeaders;                              // 0x2C(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxSpeedMultiplier;                                // 0x30(0x4)(Edit, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxForceMultiplier;                                // 0x34(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseBoundsCulling;                                 // 0x38(0x1)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50C3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BoundsCullingMultiplier;                           // 0x3C(0x4)(Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ShooterGame.Boid
struct FBoid
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FRotator                              Rotation;                                          // 0x18(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Velocity;                                          // 0x30(0x18)(Config, EditConst, GlobalConfig)
	struct FVector                               Acceleration;                                      // 0x48(0x18)(Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	float                                        MaxSpeed;                                          // 0x60(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
	float                                        MaxForce;                                          // 0x64(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TurnRate;                                          // 0x68(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseTargeting : 1;                                 // Mask: 0x1, PropSize: 0x10x6C(0x1)(ConstParm, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHasReachedTarget : 1;                             // Mask: 0x2, PropSize: 0x10x6C(0x1)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsAlive : 1;                                      // Mask: 0x4, PropSize: 0x10x6C(0x1)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3F0 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50C4[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SpiralTime;                                        // 0x70(0x4)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50C5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TargetLocation;                                    // 0x78(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EBoidType                         Type;                                              // 0x90(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_50C6[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.FogOfWarInfoStruct
struct FFogOfWarInfoStruct
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                CompressedVisibilityBuffer;                        // 0x10(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       UnCompressedVisibilityBufferSize;                  // 0x20(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50C8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<bool>                                 UnlockMask;                                        // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.FloorSlopeData
struct FFloorSlopeData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               SlopeDir;                                          // 0x18(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.SlideData
struct FSlideData
{
public:
	TWeakObjectPtr<class USplineComponent>       SplineComponent;                                   // 0x0(0x8)(ConstParm, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig)
	class UParticleSystemComponent*              Emitter;                                           // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor)
	float                                        CurTime;                                           // 0x10(0x4)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Duration;                                          // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	TArray<struct FVector>                       Points;                                            // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
	TArray<struct FVector>                       Tangents;                                          // 0x28(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Location;                                          // 0x38(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Tangent;                                           // 0x50(0x18)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ShooterGame.DinoClassCount
struct FDinoClassCount
{
public:
	int32                                        NumberofTamedClass;                                // 0x0(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofTamedBabyClass;                            // 0x4(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofTamedFemalesClass;                         // 0x8(0x4)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofWildClass;                                 // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofWildBabyClass;                             // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofWildFemalesClass;                          // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofWildLatentSpawns;                          // 0x18(0x4)(ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.HordeCrateNPCGroup
struct FHordeCrateNPCGroup
{
public:
	TArray<class UClass*>                        NPCClasses;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> NPCAssets;                                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                NPCWeights;                                        // 0x20(0x10)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                MinLevels;                                         // 0x30(0x10)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                MaxLevels;                                         // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.HordeCrateWave
struct FHordeCrateWave
{
public:
	int32                                        MinNumOfNPCs;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxNumOfNPCs;                                      // 0x4(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeToPrepareForWave;                              // 0x8(0x4)(Edit, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50CC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHordeCrateNPCGroup                   NPCsToSpawn;                                       // 0x10(0x50)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.HordeCrateDifficultyLevel
struct FHordeCrateDifficultyLevel
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ConstParm, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig)
	uint8                                        Pad_50CE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxNumOfEventsForDifficulty;                       // 0x4(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DifficultyLevel;                                   // 0x8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinNPCsToStart;                                    // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxNPCsToStart;                                    // 0x10(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50CF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FHordeCrateNPCGroup                   StartingNPCs;                                      // 0x18(0x50)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FHordeCrateWave>               NPCWavesToComplete;                                // 0x68(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinTimeBeforeSelfDestruct;                         // 0x78(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxTimeBeforeSelfDestruct;                         // 0x7C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ActorTemplate;                                     // 0x80(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinQualityMultiplier;                              // 0x88(0x4)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxQualityMultiplier;                              // 0x8C(0x4)(Edit, Net, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinAmtRewardItems;                                 // 0x90(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxAmtRewardItems;                                 // 0x94(0x4)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          DifficultyColor;                                   // 0x98(0x10)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MainNodeElementPct;                                // 0xA8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50D0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.HordeCrateEvent
struct FHordeCrateEvent
{
public:
	double                                       EventStartTime;                                    // 0x0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class AActor>                 HordeSpawnNetwork;                                 // 0x8(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class AActor>                 HordeModeCrate;                                    // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasBeenInitiated;                                 // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        EventType;                                         // 0x19(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_50D1[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.PropertyThunkWrapper
struct FPropertyThunkWrapper
{
public:
	uint8                                        Pad_50D2[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.LeaderboardRow
struct FLeaderboardRow
{
public:
	class FName                                  MissionTag;                                        // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PlayerNetId;                                       // 0x8(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TribeID;                                           // 0x18(0x4)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50D3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TimestampUtc;                                      // 0x20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FloatValue;                                        // 0x28(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	int32                                        IntValue;                                          // 0x2C(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FName                                  NameValue;                                         // 0x30(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                StringValue;                                       // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.LeaderboardEntry
struct FLeaderboardEntry
{
public:
	class FName                                  MissionTag;                                        // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLeaderboardRow>               Rows;                                              // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.LeaderboardsContainer
struct FLeaderboardsContainer
{
public:
	TArray<struct FLeaderboardEntry>             Leaderboards;                                      // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.LeaderboardColumnDefinition
struct FLeaderboardColumnDefinition
{
public:
	float                                        WidthPercent;                                      // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMargin                               ColumnPadding;                                     // 0x4(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50D4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FSlateFontInfo                        Font;                                              // 0x18(0x58)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.MapData
struct FMapData
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            MapTexture;                                        // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               OriginMax;                                         // 0x18(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               OriginMin;                                         // 0x30(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PlayableMax;                                       // 0x48(0x18)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PlayableMin;                                       // 0x60(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.Int32Array
struct FInt32Array
{
public:
	TArray<int32>                                Array;                                             // 0x0(0x10)(ExportObject, Parm, OutParm, ZeroConstructor)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.MetaTagIDInfo
struct FMetaTagIDInfo
{
public:
	int32                                        MetaTagEnumIndex;                                  // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  MetaTagDisplayName;                                // 0x4(0x8)(Edit, BlueprintVisible, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.MissionWorldIndicator
struct FMissionWorldIndicator
{
public:
	class FName                                  DescriptionTagString;                              // 0x0(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Icon;                                              // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	class UClass*                                ItemType;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WorldPosition;                                     // 0x18(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Config, EditConst, GlobalConfig)
	class AActor*                                TargetActor;                                       // 0x30(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Priority;                                          // 0x38(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_50D5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CustomData;                                        // 0x40(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	uint8                                        bUseTargetActorName : 1;                           // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseTargetActorIcon : 1;                           // Mask: 0x2, PropSize: 0x10x48(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseItemName : 1;                                  // Mask: 0x4, PropSize: 0x10x48(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseItemIcon : 1;                                  // Mask: 0x8, PropSize: 0x10x48(0x1)(Net, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyVisibleOffScreen : 1;                         // Mask: 0x10, PropSize: 0x10x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyVisibleOnScreen : 1;                          // Mask: 0x20, PropSize: 0x10x48(0x1)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAlwaysVisible : 1;                                // Mask: 0x40, PropSize: 0x10x48(0x1)(Edit, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCompanionIndicator : 1;                           // Mask: 0x80, PropSize: 0x10x48(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowDistance : 1;                                 // Mask: 0x1, PropSize: 0x10x49(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3F1 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50D6[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          IndicatorColor;                                    // 0x4C(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          IconColor;                                         // 0x5C(0x10)(Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUsePulseAnimation : 1;                            // Mask: 0x1, PropSize: 0x10x6C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowProgress : 1;                                 // Mask: 0x2, PropSize: 0x10x6C(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3F2 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50D7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ProgressValue;                                     // 0x70(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50D8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProgressLabelText;                                 // 0x78(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ProgressBarColor;                                  // 0x88(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ProgressLabelColor;                                // 0x98(0x10)(Edit, ExportObject, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowProgressLabelWhenOffScreen : 1;               // Mask: 0x1, PropSize: 0x10xA8(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50D9[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.MissionRelatedActorData
struct FMissionRelatedActorData
{
public:
	class AActor*                                RelatedActor;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  RelatedActorPropertyName;                          // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMissionRelatedPropertyType       RelatedActorPropertyType;                          // 0x10(0x1)(Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EMissionRelatedPropertyUsage      RelatedActorPropertyUsage;                         // 0x11(0x1)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50DA[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          RelatedActorPropertyTextColor;                     // 0x14(0x10)(ConstParm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          LocalIndexMatchColorModifier;                      // 0x24(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseLocalIndexMatchColorModifier;                  // 0x34(0x1)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50DB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        IndexMatchRangeOffset;                             // 0x38(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50DC[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ShooterGame.MissionPhaseRequirement
struct FMissionPhaseRequirement
{
public:
	class FName                                  DescriptionStringTag;                              // 0x0(0x8)(ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                RelatedType;                                       // 0x8(0x8)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseRelatedTypeName : 1;                           // Mask: 0x1, PropSize: 0x10x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3F3 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50DD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FMissionRelatedActorData              OptionalRelatedActorData;                          // 0x18(0x40)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsComplete : 1;                                   // Mask: 0x1, PropSize: 0x10x58(0x1)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseCount : 1;                                     // Mask: 0x2, PropSize: 0x10x58(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseProgress : 1;                                  // Mask: 0x4, PropSize: 0x10x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAutoCalculateProgressFromCount : 1;               // Mask: 0x8, PropSize: 0x10x58(0x1)(BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3F4 : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50DE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CurrentCount;                                      // 0x5C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxCount;                                          // 0x60(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Progress;                                          // 0x64(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	enum class EPhaseRequirementWidgetVisualState PhaseRequirementWidgetVisualState;                 // 0x68(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50DF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          CustomPhaseRequirementTextColor;                   // 0x6C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          CustomPhaseRequirementProgressBarColor;            // 0x7C(0x10)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50E0[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.TimeRange
struct FTimeRange
{
public:
	float                                        Min;                                               // 0x0(0x4)(ExportObject, Net, ReturnParm, Transient, Config)
	float                                        Max;                                               // 0x4(0x4)(Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, Config)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.MissionPhase
struct FMissionPhase
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ConstParm, Net, OutParm)
	class FString                                DisplayText;                                       // 0x8(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowInUI : 1;                                     // Mask: 0x1, PropSize: 0x10x18(0x1)(BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseBPGetPhaseDisplayText : 1;                     // Mask: 0x2, PropSize: 0x10x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseGeneratePhaseRequirements : 1;                 // Mask: 0x4, PropSize: 0x10x18(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAutoSwitchToNextPhase : 1;                        // Mask: 0x8, PropSize: 0x10x18(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsLastPhase : 1;                                  // Mask: 0x10, PropSize: 0x10x18(0x1)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3F5 : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50E1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WaitTimeAfterPhaseCompletes;                       // 0x1C(0x4)(BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  NextPhaseName;                                     // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTimeRange                            AutoSwitchPhaseAttemptInterval;                    // 0x28(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            PhaseStartSound;                                   // 0x30(0x8)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            PhaseEndSound;                                     // 0x38(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            PhaseMusicLoop;                                    // 0x40(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ShooterGame.MissionPhaseData
struct FMissionPhaseData
{
public:
	uint8                                        bPhaseCompleted : 1;                               // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50E2[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.TeleportedCharacter
struct FTeleportedCharacter
{
public:
	class APrimalCharacter*                      Character;                                         // 0x0(0x8)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig)
	class AController*                           Controller;                                        // 0x8(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	struct FVector                               OriginalLocation;                                  // 0x10(0x18)(Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              OriginalRotation;                                  // 0x28(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.MissionDinoPath
struct FMissionDinoPath
{
public:
	TWeakObjectPtr<class AActor>                 TargetActor;                                       // 0x0(0x8)(BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               CurrentTarget;                                     // 0x8(0x18)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LastTarget;                                        // 0x20(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurrentSplineKeyTarget;                            // 0x38(0x4)(BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LastSplineKeyTarget;                               // 0x3C(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastUpdateTime;                                    // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UpdateInterval;                                    // 0x48(0x4)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class USplineComponent>       ForcePathSpline;                                   // 0x4C(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bReverseAtEnd : 1;                                 // Mask: 0x1, PropSize: 0x10x54(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50E3[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.CharacterAndControllerPair
struct FCharacterAndControllerPair
{
public:
	class AShooterCharacter*                     Character;                                         // 0x0(0x8)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig)
	class AShooterPlayerController*              Controller;                                        // 0x8(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.PlayerItems
struct FPlayerItems
{
public:
	class AShooterCharacter*                     Character;                                         // 0x0(0x8)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig)
	TArray<struct FItemNetID>                    ItemIDs;                                           // 0x8(0x10)(ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.TaggedString
struct FTaggedString
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                String;                                            // 0x8(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.RacePlayerData
struct FRacePlayerData
{
public:
	class AShooterPlayerController*              Controller;                                        // 0x0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	class AShooterCharacter*                     Character;                                         // 0x8(0x8)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig)
	int32                                        TargetCheckpoint;                                  // 0x10(0x4)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50E4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<bool>                                 CheckpointsHit;                                    // 0x18(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                CheckpointTimes;                                   // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.MissionWorldBuffData
struct FMissionWorldBuffData
{
public:
	class FName                                  WorldBuffIdentifier;                               // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StacksToGive;                                      // 0x8(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.MountedDLCInfo
struct FMountedDLCInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class FString                                Path;                                              // 0x10(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	class FString                                ID;                                                // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FString                                ProductId;                                         // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAutoMount : 1;                                    // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3F6 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50E5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                StoreProductIdOverride;                            // 0x48(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.MountedDLCMapInfo
struct FMountedDLCMapInfo
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FString                                Map;                                               // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.Struct_MissionModule_Travel
struct FStruct_MissionModule_Travel
{
public:
	class FString                                RequirementsTitle;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  RequirementsMessage;                               // 0x10(0x8)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DelayAfterModule;                                  // 0x18(0x4)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DelayBeforeModule;                                 // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  TriggerKeyOfPointToGoTo;                           // 0x20(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DistanceFromPointToHideIcon;                       // 0x28(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  NavPointLabel;                                     // 0x2C(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50E6[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.LinkedZoneSpawnVolumeEntry
struct FLinkedZoneSpawnVolumeEntry
{
public:
	class ANPCZoneSpawnVolume*                   LinkedZoneSpawnVolume;                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AActor*>                        ZoneSpawnVolumeFloors;                             // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AActor*>                        ZoneSpawnVolumeIgnoreCeilings;                     // 0x18(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          ZoneSpawnVolumeIgnoreCeilingTags;                  // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          ZoneSpawnVolumeFloorTags;                          // 0x38(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EntryWeight;                                       // 0x48(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50E7[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.HibernationCountInfo
struct FHibernationCountInfo
{
public:
	TSoftClassPtr<class APrimalDinoCharacter>    ClassType;                                         // 0x0(0x30)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Count;                                             // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_50E8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.OceanDinoSpawnEntry
struct FOceanDinoSpawnEntry
{
public:
	class FString                                EntryFriendlyName;                                 // 0x0(0x10)(ConstParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class APrimalDinoCharacter>    SpawnDinoClass;                                    // 0x10(0x30)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpawnDinoWeight;                                   // 0x40(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EntrySpawnDistanceMultiplier;                      // 0x44(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpawnZOffset;                                      // 0x48(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumDepthFromWaterSurface;                      // 0x4C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxSpawnZ;                                         // 0x50(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NetworkAndStasisRangeMultiplier;                   // 0x54(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinimumAllowedFreeDepthForSpawn;                   // 0x58(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OverrideMaxValidSpawnPointAttempts;                // 0x5C(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.OceanDinoDepthEntry
struct FOceanDinoDepthEntry
{
public:
	TArray<struct FOceanDinoSpawnEntry>          OceanDinoSpawnEntries;                             // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SectionFriendlyName;                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StartAtDepthZ;                                     // 0x20(0x4)(BlueprintVisible, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50E9[0x14];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PaintingStreamingJob
struct FPaintingStreamingJob
{
public:
	uint8                                        Pad_50EA[0x40];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.BPForces
struct FBPForces
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               Force;                                             // 0x18(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	class FName                                  ForceName;                                         // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAtCenterOfGravity : 1;                            // Mask: 0x1, PropSize: 0x10x38(0x1)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3F7 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50EB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  CustomSocketName;                                  // 0x3C(0x8)(Edit, ConstParm, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50EC[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.AssetRetainer
struct FAssetRetainer
{
public:
	class UObject*                               HardReference;                                     // 0x0(0x8)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeLeft;                                          // 0x8(0x4)(BlueprintVisible, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50ED[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.MaxStatScaler
struct FMaxStatScaler
{
public:
	enum class EPrimalCharacterStatusValue       LevelUpValueType;                                  // 0x0(0x1)(Edit, ConstParm, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50EE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TargetValue;                                       // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         TargetValueIsPercent;                              // 0x8(0x1)(Edit, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50EF[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.PostProcessMaterialAdjuster
struct FPostProcessMaterialAdjuster
{
public:
	class UMaterialInterface*                    PostProcessParentMaterial;                         // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          ScalarParameterNames;                              // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ScalarParameterValues;                             // 0x18(0x10)(Edit, ConstParm, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          VectorParameterNames;                              // 0x28(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       VectorParameterValues;                             // 0x38(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.BuffMPCAdjuster
struct FBuffMPCAdjuster
{
public:
	class UMaterialParameterCollection*          MPC;                                               // 0x0(0x8)(ExportObject, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          ScalarParameterNames;                              // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ScalarParameterValues;                             // 0x18(0x10)(Edit, ConstParm, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          VectorParameterNames;                              // 0x28(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       VectorParameterValues;                             // 0x38(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.SerializedMissionData
struct FSerializedMissionData
{
public:
	class FName                                  MissionTag;                                        // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SerializedData;                                    // 0x8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct ShooterGame.CompanionEventSegmentData
struct FCompanionEventSegmentData
{
public:
	float                                        SegmentDuration;                                   // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50F0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCompanionReactionData                SegmentCompanionReaction;                          // 0x8(0xB0)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bMoveCompanionToLocation : 1;                      // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bMakeCompanionLookAtSomething : 1;                 // Mask: 0x2, PropSize: 0x10xB8(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3F8 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50F1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               MoveCompanionToLocationOffset;                     // 0xC0(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AActor*                                MakeCompanionLookAtActor;                          // 0xD8(0x8)(Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               MakeCompanionLookAtLocation;                       // 0xE0(0x18)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CompanionLocationInterpSpeed;                      // 0xF8(0x4)(ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CompanionRotationInterpSpeed;                      // 0xFC(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.CompanionEventData
struct FCompanionEventData
{
public:
	uint8                                        EventType;                                         // 0x0(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
	uint8                                        Pad_50F2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                EventTitle;                                        // 0x8(0x10)(Edit, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCompanionEventSegmentData>    EventSegmentArray;                                 // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EventTotalDuration;                                // 0x28(0x4)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50F3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       EventStartTime;                                    // 0x30(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentSegmentIndex;                               // 0x38(0x4)(ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50F4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastSegmentStartTime;                              // 0x40(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       EventEndTime;                                      // 0x48(0x8)(BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.GrappleAnchor
struct FGrappleAnchor
{
public:
	struct FVector                               AnchorWorldLocation;                               // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USceneComponent*                       AnchoredComponent;                                 // 0x18(0x8)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AnchoredItemIndex;                                 // 0x20(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50F5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                AnchoredBoneName;                                  // 0x28(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AnchorRelativeOffset;                              // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1B8 (0x1B8 - 0x0)
// ScriptStruct ShooterGame.GrappleTether
struct FGrappleTether
{
public:
	class FString                                TetherTag;                                         // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        TetherAnchor_Start;                                // 0x10(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        TetherAnchor_End;                                  // 0x60(0x50)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        TetherAnchor_Visual_Start;                         // 0xB0(0x50)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        TetherAnchor_Visual_End;                           // 0x100(0x50)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalCharacter*                      GrappledParentPrimalChar;                          // 0x150(0x8)(BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalCharacter*                      GrappleOwner;                                      // 0x158(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalBuff_Grappled*                  MasterGrappleBuff;                                 // 0x160(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TetherLifetime;                                    // 0x168(0x4)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50F6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TetherCreationTime;                                // 0x170(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50F7[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bAnyoneCanControl : 1;                             // Mask: 0x1, PropSize: 0x10x180(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseVisualAnchor_Start : 1;                        // Mask: 0x2, PropSize: 0x10x180(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseVisualAnchor_End : 1;                          // Mask: 0x4, PropSize: 0x10x180(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bTetherBroken : 1;                                 // Mask: 0x8, PropSize: 0x10x180(0x1)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3F9 : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50F8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastAboveBreakDistPastTetherLengthTime;            // 0x188(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TetherLength_Current;                              // 0x190(0x4)(Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50F9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               DirFromOwner_Current;                              // 0x198(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DistToOwner_Current;                               // 0x1B0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OwnerDistFromTetherLimit_Current;                  // 0x1B4(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x178 (0x178 - 0x0)
// ScriptStruct ShooterGame.ReplicatedGrappleTetherData
struct FReplicatedGrappleTetherData
{
public:
	class FString                                Rep_TetherTag;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        Rep_TetherAnchor_Start;                            // 0x10(0x50)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        Rep_TetherAnchor_End;                              // 0x60(0x50)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        Rep_TetherAnchor_Visual_Start;                     // 0xB0(0x50)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        Rep_TetherAnchor_Visual_End;                       // 0x100(0x50)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalBuff_Grappled*                  Rep_MasterGrappledBuff;                            // 0x150(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Rep_TetherLifetime;                                // 0x158(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50FA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Rep_TetherCreationTime;                            // 0x160(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Rep_bUseVisualAnchor_Start : 1;                    // Mask: 0x1, PropSize: 0x10x168(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Rep_bUseVisualAnchor_End : 1;                      // Mask: 0x2, PropSize: 0x10x168(0x1)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3FA : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50FB[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Rep_TetherLength;                                  // 0x16C(0x4)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Rep_bAnyoneCanControl : 1;                         // Mask: 0x1, PropSize: 0x10x170(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Rep_bTetherBroken : 1;                             // Mask: 0x2, PropSize: 0x10x170(0x1)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50FC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x160 (0x160 - 0x0)
// ScriptStruct ShooterGame.CreateGrappleTetherData
struct FCreateGrappleTetherData
{
public:
	class FString                                WithTag;                                           // 0x0(0x10)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        WithTetherStartAnchor;                             // 0x10(0x50)(Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        WithTetherEndAnchor;                               // 0x60(0x50)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        WithTetherVisualStartAnchor;                       // 0xB0(0x50)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGrappleAnchor                        WithTetherVisualEndAnchor;                         // 0x100(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalBuff_Grappled*                  WithMasterGrappleBuff;                             // 0x150(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WithTetherLifetime;                                // 0x158(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseVisualAnchor_Start : 1;                        // Mask: 0x1, PropSize: 0x10x15C(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseVisualAnchor_End : 1;                          // Mask: 0x2, PropSize: 0x10x15C(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAnyoneCanControl : 1;                             // Mask: 0x4, PropSize: 0x10x15C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_50FD[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.ClientMissionData
struct FClientMissionData
{
public:
	class AMissionType*                          Mission;                                           // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, GlobalConfig)
	TArray<struct FMissionPhaseRequirement>      Requirements;                                      // 0x8(0x10)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMissionPhaseRequirement>      LocalRequirements;                                 // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMissionWorldIndicator>        MissionWorldIndicators;                            // 0x28(0x10)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FMissionWorldIndicator>        LocalWorldIndicators;                              // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FItemNetInfo>                  Items;                                             // 0x48(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.MissionEligibilityData
struct FMissionEligibilityData
{
public:
	class UClass*                                MissionType;                                       // 0x0(0x8)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	class FName                                  IneligibleReasonType;                              // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastCompletedUtcTime;                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsEligible : 1;                                   // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCompleted : 1;                                    // Mask: 0x2, PropSize: 0x10x18(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnGlobalCooldown : 1;                             // Mask: 0x4, PropSize: 0x10x18(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnPerPlayerCooldown : 1;                          // Mask: 0x8, PropSize: 0x10x18(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3FB : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50FE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MissionMaxDurationSeconds;                         // 0x1C(0x4)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       MissionStartNetworkTime;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.ClientMissionEligibility
struct FClientMissionEligibility
{
public:
	uint8                                        bIsEligible : 1;                                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCompleted : 1;                                    // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnGlobalCooldown : 1;                             // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnPerPlayerCooldown : 1;                          // Mask: 0x8, PropSize: 0x10x0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bMinLevelRequirement : 1;                          // Mask: 0x10, PropSize: 0x10x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3FC : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_50FF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastUpdateNetworkTime;                             // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastCompletedUtcTime;                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MissionMaxDurationSeconds;                         // 0x18(0x4)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5100[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       MissionStartNetworkTime;                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Reason;                                            // 0x28(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.ClientMissionSubscriptionData
struct FClientMissionSubscriptionData
{
public:
	TSoftClassPtr<class AMissionType>            MissionType;                                       // 0x0(0x30)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig)
	TArray<class FName>                          Keys;                                              // 0x30(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.CableParticle
struct FCableParticle
{
public:
	bool                                         bFree;                                             // 0x0(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5101[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	struct FVector                               OldPosition;                                       // 0x20(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DefaultTextureParamOverride
struct FDefaultTextureParamOverride
{
public:
	class FName                                  TextureParamName;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            TextureValue;                                      // 0x8(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.PrimalSnapshotPose
struct FPrimalSnapshotPose
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class UAnimSequence*                         Sequence;                                          // 0x10(0x8)(BlueprintVisible, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Time;                                              // 0x18(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Pedestal;                                          // 0x1C(0x1)(Edit, ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5102[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PedestalBone;                                      // 0x20(0x10)(ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               RootOffset;                                        // 0x30(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.VelocityBasedCharacterSoundInfo
struct FVelocityBasedCharacterSoundInfo
{
public:
	TArray<class USoundBase*>                    Sounds;                                            // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             VelocityRange;                                     // 0x10(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAdjustByCharacterSize;                            // 0x20(0x1)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5103[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LowerSize;                                         // 0x24(0x4)(Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UpperSize;                                         // 0x28(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LowerOffset;                                       // 0x2C(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        UpperOffset;                                       // 0x30(0x4)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5104[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.PrimalCharacterStatusStateThresholds
struct FPrimalCharacterStatusStateThresholds
{
public:
	TArray<float>                                HighThresholdStatusStateValues;                    // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EPrimalCharacterStatusState> HighThresholdStatusStateType;                      // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                LowThresholdStatusStateValues;                     // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EPrimalCharacterStatusState> LowThresholdStatusStateType;                       // 0x30(0x10)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         StatusStateThresholdValuesAbsolute;                // 0x40(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5105[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.PrimalCharacterStatusValueModifier
struct FPrimalCharacterStatusValueModifier
{
public:
	uint8                                        Pad_5106[0x28];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.CinematicMaterial
struct FCinematicMaterial
{
public:
	class UMaterialInstanceDynamic*              Mid;                                               // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig)
	TSoftObjectPtr<class UMaterial>              CinematicMaterial;                                 // 0x8(0x30)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ShooterGame.ClimbingTypeSettings
struct FClimbingTypeSettings
{
public:
	uint8                                        bIsOneShot : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3FD : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5107[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WaitTime;                                          // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StaminaConsumption;                                // 0x8(0x4)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ConsumeDurabilityMultiplier;                       // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttachMoveTraceDistance;                           // 0x10(0x4)(Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttachBackTraceDistance;                           // 0x14(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttachForwardTraceDistance;                        // 0x18(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.ClimbingTransitionParams
struct FClimbingTransitionParams
{
public:
	float                                        LocationInterpSpeed;                               // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RotationInterpSpeed;                               // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        OvershootDuration;                                 // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OvershootCurveExp;                                 // 0xC(0x4)(Edit, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OvershootCurveStartOffset;                         // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OvershootCurveDirectionBias;                       // 0x14(0x4)(ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OvershootCurveStartBias;                           // 0x18(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OvershootCurveEndOffset;                           // 0x1C(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OvershootCurveEndBias;                             // 0x20(0x4)(ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CameraLocationInterpSpeed;                         // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CameraRotationInterpSpeed;                         // 0x28(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCameraSwitch;                                     // 0x2C(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5108[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CameraTransitionDuration;                          // 0x30(0x4)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5109[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               CameraSwitchStrength;                              // 0x38(0x18)(ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CameraSwitchLocationInterpSpeed;                   // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CameraSwitchRotationInterpSpeed;                   // 0x54(0x4)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              CameraSwitchOffset;                                // 0x58(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.ColorSetDefinition
struct FColorSetDefinition
{
public:
	class FString                                RegionName;                                        // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          ColorEntryNames;                                   // 0x10(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                RandomWeights;                                     // 0x20(0x10)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                MinLevel;                                          // 0x30(0x10)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                MaxLevel;                                          // 0x40(0x10)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        Pad_510A[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.ARKDinoData
struct FARKDinoData
{
public:
	class UClass*                                DinoClass;                                         // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                DinoData;                                          // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DinoNameInMap;                                     // 0x18(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DinoName;                                          // 0x28(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNetInfoFromClient;                                // 0x38(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_510B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.HibernationZoneInfo
struct FHibernationZoneInfo
{
public:
	class ANPCZoneVolume*                        Volume;                                            // 0x0(0x8)(EditFixedSize, OutParm, ReturnParm, Transient, Config)
	float                                        Weight;                                            // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	uint8                                        Pad_510C[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.WildFollowerSpawnEntry
struct FWildFollowerSpawnEntry
{
public:
	TArray<float>                                WeightedChancesToAlsoSpawnWildFollowerOnSpawn;     // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class APrimalDinoCharacter>    ClassOverride;                                     // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDontSpawnAsChild : 1;                             // Mask: 0x1, PropSize: 0x10x40(0x1)(ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoreConfigSpawnChanceMultiplier : 1;            // Mask: 0x2, PropSize: 0x10x40(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoreConfigSpawnCountMultiplier : 1;             // Mask: 0x4, PropSize: 0x10x40(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3FE : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_510D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AgeRangeMin;                                       // 0x44(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AgeRangeMax;                                       // 0x48(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_510E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.DinoExtraDefaultItemList
struct FDinoExtraDefaultItemList
{
public:
	int32                                        MinimumDinoLevel;                                  // 0x0(0x4)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ChanceToGive;                                      // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        DefaultItemsToGive;                                // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.DinoBaseLevelWeightEntry
struct FDinoBaseLevelWeightEntry
{
public:
	float                                        EntryWeight;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BaseLevelMinRange;                                 // 0x4(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BaseLevelMaxRange;                                 // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DinoFoodEffectivenessMultipliers
struct FDinoFoodEffectivenessMultipliers
{
public:
	float                                        FoodEffectivenessMultiplier;                       // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HealthEffectivenessMultiplier;                     // 0x4(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TorpidityEffectivenessMultiplier;                  // 0x8(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AffinityEffectivenessMultiplier;                   // 0xC(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AffinityOverride;                                  // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StaminaEffectivenessMultiplier;                    // 0x14(0x4)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FoodItemCategory;                                  // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_510F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                FoodItemParent;                                    // 0x20(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        UntamedFoodConsumptionPriority;                    // 0x28(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5110[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PrimalSaddleStructure
struct FPrimalSaddleStructure
{
public:
	struct FVector                               DinoRelativeLocation;                              // 0x0(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              DinoRelativeRotation;                              // 0x18(0x18)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	class APrimalStructure*                      MyStructure;                                       // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct ShooterGame.DinoAttackInfo
struct FDinoAttackInfo
{
public:
	class FName                                  AttackName;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackWeight;                                      // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackRange;                                       // 0xC(0x4)(ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinAttackRange;                                    // 0x10(0x4)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ActivateAttackRange;                               // 0x14(0x4)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackInterval;                                    // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHighQualityAttack : 1;                            // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSkipUntamed : 1;                                  // Mask: 0x2, PropSize: 0x10x1C(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSkipTamed : 1;                                    // Mask: 0x4, PropSize: 0x10x1C(0x1)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyOnWildDinos : 1;                              // Mask: 0x8, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventWhenEncumbered : 1;                        // Mask: 0x10, PropSize: 0x10x1C(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRidingOnlyAllowOnGround : 1;                      // Mask: 0x20, PropSize: 0x10x1C(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRidingOnlyAllowWhileFlying : 1;                   // Mask: 0x40, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyUseWithPlayersOrRiders : 1;                   // Mask: 0x80, PropSize: 0x10x1C(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyUseWithPlayers : 1;                           // Mask: 0x1, PropSize: 0x10x1D(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventWhenSwimming : 1;                          // Mask: 0x2, PropSize: 0x10x1D(0x1)(BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventWhenInsufficientStamina : 1;               // Mask: 0x4, PropSize: 0x10x1D(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSkipOnFlyers : 1;                                 // Mask: 0x8, PropSize: 0x10x1D(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSkipAI : 1;                                       // Mask: 0x10, PropSize: 0x10x1D(0x1)(ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventOnFemale : 1;                              // Mask: 0x20, PropSize: 0x10x1D(0x1)(Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventOnMale : 1;                                // Mask: 0x40, PropSize: 0x10x1D(0x1)(Edit, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventWhenDinoCarrying : 1;                      // Mask: 0x80, PropSize: 0x10x1D(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseBlueprintCanRiderAttack : 1;                   // Mask: 0x1, PropSize: 0x10x1E(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresWalking : 1;                              // Mask: 0x2, PropSize: 0x10x1E(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresSwimming : 1;                             // Mask: 0x4, PropSize: 0x10x1E(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        AttackStatusStarted : 1;                           // Mask: 0x8, PropSize: 0x10x1E(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttackStopsMovement : 1;                          // Mask: 0x10, PropSize: 0x10x1E(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttackStopsMovementAllowFalling : 1;              // Mask: 0x20, PropSize: 0x10x1E(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttackWithJump : 1;                               // Mask: 0x40, PropSize: 0x10x1E(0x1)(ConstParm, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bLocationBasedAttack : 1;                          // Mask: 0x80, PropSize: 0x10x1E(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDropCarriedCharacter : 1;                         // Mask: 0x1, PropSize: 0x10x1F(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCancelAndDropIfCarriedCharacter : 1;              // Mask: 0x2, PropSize: 0x10x1F(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventAttackWhileRunning : 1;                    // Mask: 0x4, PropSize: 0x10x1F(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        ForceUpdateInRange : 1;                            // Mask: 0x8, PropSize: 0x10x1F(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        ForceUpdateMeshSelf : 1;                           // Mask: 0x10, PropSize: 0x10x1F(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseSecondaryAnimationInAir : 1;                   // Mask: 0x20, PropSize: 0x10x1F(0x1)(ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseBlueprintCanAttack : 1;                        // Mask: 0x40, PropSize: 0x10x1F(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseBlueprintAdjustOutputDamage : 1;               // Mask: 0x80, PropSize: 0x10x1F(0x1)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisableRunningWhenAttacking : 1;                  // Mask: 0x1, PropSize: 0x10x20(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bKeepExecutingWhenAcquiringTarget : 1;             // Mask: 0x2, PropSize: 0x10x20(0x1)(ConstParm, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventWithRider : 1;                             // Mask: 0x4, PropSize: 0x10x20(0x1)(Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAIForceAttackDotProductCheck : 1;                 // Mask: 0x8, PropSize: 0x10x20(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bInstantlyHarvestCorpse : 1;                       // Mask: 0x10, PropSize: 0x10x20(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAddPawnVelocityToProjectile : 1;                  // Mask: 0x20, PropSize: 0x10x20(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttackStopsRotation : 1;                          // Mask: 0x40, PropSize: 0x10x20(0x1)(Edit, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bTamedAISpecialAttack : 1;                         // Mask: 0x80, PropSize: 0x10x20(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventWhenCarryingExplosive : 1;                 // Mask: 0x1, PropSize: 0x10x21(0x1)(Edit, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowWhenAnimationPreventsInput : 1;              // Mask: 0x2, PropSize: 0x10x21(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequireLineOfSight : 1;                           // Mask: 0x4, PropSize: 0x10x21(0x1)(Edit, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseBPOverrideGetAttackAnimationIndex : 1;         // Mask: 0x8, PropSize: 0x10x21(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseSecondaryAnimationWhenSwimming : 1;            // Mask: 0x10, PropSize: 0x10x21(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseTertiaryAnimationWhenSwimming : 1;             // Mask: 0x20, PropSize: 0x10x21(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHighQualityAttackOnlyPlayerOrTamed : 1;           // Mask: 0x40, PropSize: 0x10x21(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bMeleeTraceForHitBlockers : 1;                     // Mask: 0x80, PropSize: 0x10x21(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bMeleeTraceForHitBlockersAddHeadsocket : 1;        // Mask: 0x1, PropSize: 0x10x22(0x1)(BlueprintVisible, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_3FF : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5111[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bIgnoreCrouchAttack : 1;                           // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoreResettingAttackIndexInTick : 1;             // Mask: 0x2, PropSize: 0x10x24(0x1)(Edit, ConstParm, BlueprintVisible, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventSkippingAnimGraphDuringAttack : 1;         // Mask: 0x4, PropSize: 0x10x24(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_400 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5112[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                ChildStateIndexes;                                 // 0x28(0x10)(Edit, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackWithJumpChance;                              // 0x38(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5113[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastAttackTime;                                    // 0x40(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       RiderLastAttackTime;                               // 0x48(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackSelectionExpirationTime;                     // 0x50(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5114[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       AttackSelectionTime;                               // 0x58(0x8)(BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackRotationRangeDegrees;                        // 0x60(0x4)(ConstParm, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackRotationGroundSpeedMultiplier;               // 0x64(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              AttackRotationRate;                                // 0x68(0x18)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          MeleeSwingSockets;                                 // 0x80(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  RangedSocket;                                      // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MeleeDamageAmount;                                 // 0x98(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MeleeDamageImpulse;                                // 0x9C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MeleeSwingRadius;                                  // 0xA0(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5115[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                MeleeDamageType;                                   // 0xA8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackOffset;                                      // 0xB0(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StaminaCost;                                       // 0xB4(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RiderAttackInterval;                               // 0xB8(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DotProductCheckMin;                                // 0xBC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DotProductCheckMax;                                // 0xC0(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5116[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UAnimMontage*>                  AttackAnimations;                                  // 0xC8(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                AttackAnimationWeights;                            // 0xD8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                AttackAnimationsTimeFromEndToConsiderFinished;     // 0xE8(0x10)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ProjectileClass;                                   // 0xF8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                AttackStateTypeClass;                              // 0x100(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AttackRunningSpeedModifier;                        // 0x108(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SwimmingAttackRunningSpeedModifier;                // 0x10C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SetAttackTargetTime;                               // 0x110(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5117[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UPrimalAIState*                        AttackStateType;                                   // 0x118(0x8)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       LastSocketPositions;                               // 0x120(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastProjectileSpawnTime;                           // 0x130(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          AttackAnimDamageImpactFXSocketNames;               // 0x138(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseClosestSocketsForDamageImpactFX : 1;           // Mask: 0x1, PropSize: 0x10x148(0x1)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisableAttackerDamageImpactFX : 1;                // Mask: 0x2, PropSize: 0x10x148(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5118[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.DinoSaddleStruct
struct FDinoSaddleStruct
{
public:
	class USkeletalMeshComponent*                Saddle;                                            // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)
	struct FItemNetID                            ItemID;                                            // 0x10(0x8)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance)
	bool                                         bJustRemoved;                                      // 0x18(0x1)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5119[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.EngramEntries
struct FEngramEntries
{
public:
	TArray<class UClass*>                        EngramEntries;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, Config)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ShooterGame.CustomCosmeticModObjectSkinEntry
struct FCustomCosmeticModObjectSkinEntry
{
public:
	class FString                                CustomCosmeticSkinDescriptiveName;                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CosmeticID;                                        // 0x10(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_511A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class UObject>>         ApplyToClasses;                                    // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             ModSkinItem;                                       // 0x28(0x30)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class APrimalStructure>        ModSkinStructure;                                  // 0x58(0x30)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCosmeticApplyAsItemSkin;                          // 0x88(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_511B[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.CustomCosmeticModSkin
struct FCustomCosmeticModSkin
{
public:
	int64                                        ModId;                                             // 0x0(0x8)(ConstParm, Net, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                ModSkinName;                                       // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCustomCosmeticModObjectSkinEntry> ObjectSkinEntries;                                 // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.HairStyleDefinitionMeshAnimbpPair
struct FHairStyleDefinitionMeshAnimbpPair
{
public:
	TSoftObjectPtr<class USkeletalMesh>          HairMesh;                                          // 0x0(0x30)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                AnimBlueprint;                                     // 0x30(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	TSoftObjectPtr<class UTexture2D>             PlayerMeshTextureMask;                             // 0x38(0x30)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct ShooterGame.HairStyleDefinition
struct FHairStyleDefinition
{
public:
	bool                                         bIsHairStyleLocked;                                // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseTallHairOffsetCamera;                          // 0x1(0x1)(ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_511C[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  UnlockHairStyleName;                               // 0x4(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_511D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                HairStyleName;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FHairStyleDefinitionMeshAnimbpPair> HairMeshesMale;                                    // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaleBeginHairMorphTargetRange;                     // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_511E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FHairStyleDefinitionMeshAnimbpPair> HairMeshesFemale;                                  // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UMaterialInterface>     FemaleHairOverride;                                // 0x48(0x30)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FemaleBeginHairMorphTargetRange;                   // 0x78(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_511F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            HairStylePreviewIconImage;                         // 0x80(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UTexture2D>             FemaleOverrideHairStylePreviewIconImage;           // 0x88(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.MusicTrackEntry
struct FMusicTrackEntry
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class FString                                Description;                                       // 0x10(0x10)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	class UTexture2D*                            DisplayIcon;                                       // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundWave*                            Music;                                             // 0x28(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, DuplicateTransient)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DinoAncestorsEntryBlueprint
struct FDinoAncestorsEntryBlueprint
{
public:
	class FString                                MaleName;                                          // 0x0(0x10)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        MaleDinoID1;                                       // 0x10(0x4)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        MaleDinoID2;                                       // 0x14(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FString                                FemaleName;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        FemaleDinoID1;                                     // 0x28(0x4)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        FemaleDinoID2;                                     // 0x2C(0x4)(BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.PlayerConfigDynamicMaterialVectorNameVectorTypePairs
struct FPlayerConfigDynamicMaterialVectorNameVectorTypePairs
{
public:
	enum class EPlayerConfigDynamicMaterialVectorTypes DynamicMaterialVectorType;                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5120[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  NameUsedForDynamicMaterialVectorParam;             // 0x4(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PlayerConfigVoiceCollectionInfo
struct FPlayerConfigVoiceCollectionInfo
{
public:
	class UPrimaryDataAsset*                     VoiceCollectionRef;                                // 0x0(0x8)(BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                NameUsedForVoiceCollection;                        // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsMasculineCategory : 1;                          // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsFeminineCategory : 1;                           // Mask: 0x2, PropSize: 0x10x18(0x1)(ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5121[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.BoneTypeValueStruct
struct FBoneTypeValueStruct
{
public:
	enum class EBoneModifierType                 BoneModifierType;                                  // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5122[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Value;                                             // 0x4(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PlayerDynamicMaterialFloat
struct FPlayerDynamicMaterialFloat
{
public:
	class FName                                  NameUsedForDynamicMaterialByteParam;               // 0x0(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinValue;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        MaxValue;                                          // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        MinRandomSliderValue;                              // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxRandomSliderValue;                              // 0x14(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultValueMale;                                  // 0x18(0x4)(Edit, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultValueFemale;                                // 0x1C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.PlayerDynamicMaterialVector
struct FPlayerDynamicMaterialVector
{
public:
	class FName                                  NameUsedForDynamicMaterialByteParam;               // 0x0(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               MinValue;                                          // 0x8(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               MaxValue;                                          // 0x20(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.PlayerDynamicMaterialColors
struct FPlayerDynamicMaterialColors
{
public:
	class FName                                  NameUsedForDynamicMaterialByteParam;               // 0x0(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                Value;                                             // 0x8(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.PlayerBoneBodyPreset
struct FPlayerBoneBodyPreset
{
public:
	class FString                                BodyPresetName;                                    // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            BodyPresetPreviewIconImage;                        // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FBoneTypeValueStruct>          BoneModifierSliderValues;                          // 0x18(0x10)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                DynamicMaterialByteFloats;                         // 0x28(0x10)(BlueprintVisible, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPlayerDynamicMaterialVector>  DynamicMaterialByteVector;                         // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPlayerDynamicMaterialColors>  DynamicMaterialByteColors;                         // 0x48(0x10)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bMaleOnly : 1;                                     // Mask: 0x1, PropSize: 0x10x58(0x1)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bFemaleOnly : 1;                                   // Mask: 0x2, PropSize: 0x10x58(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5123[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.NameColorPair
struct FNameColorPair
{
public:
	class FName                                  MaterialParamName;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.NameScalarPair
struct FNameScalarPair
{
public:
	class FName                                  MaterialParamName;                                 // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Value;                                             // 0x8(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.LocalizedSoundCueEntry
struct FLocalizedSoundCueEntry
{
public:
	class FString                                TwoLetterISOLanguageName;                          // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	struct FSoftObjectPath                       LocalizedSoundCue;                                 // 0x10(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ShooterGame.ExplorerNoteEntry
struct FExplorerNoteEntry
{
public:
	uint8                                        Pad_5124[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ExplorerNoteType;                                  // 0x4(0x4)(Edit, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsIsland : 1;                                     // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsScorchedEarth : 1;                              // Mask: 0x2, PropSize: 0x10x8(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsAberration : 1;                                 // Mask: 0x4, PropSize: 0x10x8(0x1)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsExtinction : 1;                                 // Mask: 0x8, PropSize: 0x10x8(0x1)(ConstParm, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsGenesis1 : 1;                                   // Mask: 0x10, PropSize: 0x10x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsGenesis2 : 1;                                   // Mask: 0x20, PropSize: 0x10x8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsDossier : 1;                                    // Mask: 0x40, PropSize: 0x10x8(0x1)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDontRequireProximityToChest : 1;                  // Mask: 0x80, PropSize: 0x10x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUnlockIgnorePopup : 1;                            // Mask: 0x1, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUnlockIgnoreSound : 1;                            // Mask: 0x2, PropSize: 0x10x9(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventXPBuff : 1;                                // Mask: 0x4, PropSize: 0x10x9(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsMisc : 1;                                       // Mask: 0x8, PropSize: 0x10x9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_401 : 4;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5125[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ExplorerNoteDescription;                           // 0x10(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  DossierTameableDinoNameTag;                        // 0x20(0x8)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class USkeletalMesh>          ExplorerNoteMesh;                                  // 0x28(0x30)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class UAnimInstance>           ExplorerNoteAnimBP;                                // 0x58(0x30)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftObjectPath                       ExplorerNoteTexture;                               // 0x88(0x20)(Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            ExplorerNoteIcon;                                  // 0xA8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    ExplorerNoteIconMaterial;                          // 0xB0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            UnlockedSoundOverride;                             // 0xB8(0x8)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ShowExplorerNoteTitleDelayTime;                    // 0xC0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5126[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundCue*                             ExplorerNoteOpenSound;                             // 0xC8(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundCue*                             ExplorerNoteCloseSound;                            // 0xD0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                MoviePath;                                         // 0xD8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	class FText                                  LocalizedSubtitle;                                 // 0xE8(0x18)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLocalizedSoundCueEntry>       LocalizedAudio;                                    // 0x100(0x10)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ExplorerNoteAchievement
struct FExplorerNoteAchievement
{
public:
	class FString                                AchievementName;                                   // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ExplorerNoteIndices;                               // 0x10(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ShooterGame.UnlockableEmoteEntry
struct FUnlockableEmoteEntry
{
public:
	class FName                                  EmoteName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                EmoteDescription;                                  // 0x8(0x10)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  EmoteGroup;                                        // 0x18(0x8)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, Config)
	class FString                                UseEmoteMessage;                                   // 0x20(0x10)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UAnimMontage>           MaleAnim;                                          // 0x30(0x30)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UAnimMontage>           FemaleAnim;                                        // 0x60(0x30)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EmotePlayMinimumInterval;                          // 0x90(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bGiveDefault;                                      // 0x94(0x1)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5127[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            EmoteIcon;                                         // 0x98(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.InventoryComponentDefaultItemsAppend
struct FInventoryComponentDefaultItemsAppend
{
public:
	TArray<class UClass*>                        InventoryComponentClasses;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        AddItems;                                          // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        RemoveItems;                                       // 0x20(0x10)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAddToForceAllowCrafting;                          // 0x30(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5128[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.MultiAchievement
struct FMultiAchievement
{
public:
	class FString                                UnlockAchievement;                                 // 0x0(0x10)(Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig)
	TArray<class FString>                        RequiredAchievements;                              // 0x10(0x10)(ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ConfigCraftingResourceRequirement
struct FConfigCraftingResourceRequirement
{
public:
	float                                        BaseResourceRequirement;                           // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5129[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ResourceItemTypeString;                            // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bCraftingRequireExactResourceType;                 // 0x18(0x1)(BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_512A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ConfigItemCraftingCostOverride
struct FConfigItemCraftingCostOverride
{
public:
	class FString                                ItemClassString;                                   // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FConfigCraftingResourceRequirement> BaseCraftingResourceRequirements;                  // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.MaxItemQuantityOverride
struct FMaxItemQuantityOverride
{
public:
	int32                                        MaxItemQuantity;                                   // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIgnoreMultiplier;                                 // 0x4(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_512B[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ConfigMaxItemQuantityOverride
struct FConfigMaxItemQuantityOverride
{
public:
	class FString                                ItemClassString;                                   // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMaxItemQuantityOverride              Quantity;                                          // 0x10(0x8)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ItemMaxItemQuantityOverride
struct FItemMaxItemQuantityOverride
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMaxItemQuantityOverride              Quantity;                                          // 0x8(0x8)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ItemCraftingCostOverride
struct FItemCraftingCostOverride
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCraftingResourceRequirement>  BaseCraftingResourceRequirements;                  // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.ClassRemapping
struct FClassRemapping
{
public:
	TSoftClassPtr<class UObject>                 FromClass;                                         // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class UObject>                 ToClass;                                           // 0x30(0x30)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ObjectCorrelation
struct FObjectCorrelation
{
public:
	class UObject*                               FromObject;                                        // 0x0(0x8)(Edit, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UObject*                               ToObject;                                          // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.OverrideAnimBlueprintEntry
struct FOverrideAnimBlueprintEntry
{
public:
	TSoftClassPtr<class UAnimInstance>           FromBPClass;                                       // 0x0(0x30)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class UAnimInstance>           ToBPClass;                                         // 0x30(0x30)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.ClassRemappingWeight
struct FClassRemappingWeight
{
public:
	TSoftClassPtr<class UObject>                 FromClass;                                         // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftClassPtr<class UObject>>         ToClasses;                                         // 0x30(0x10)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                Weights;                                           // 0x40(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class FName                                  ActiveEvent;                                       // 0x50(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bExactMatch : 1;                                   // Mask: 0x1, PropSize: 0x10x58(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_512C[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.ClassAddition
struct FClassAddition
{
public:
	TSoftClassPtr<class UObject>                 ForClass;                                          // 0x0(0x30)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftClassPtr<class UObject>>         ClassAdditions;                                    // 0x30(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.ActiveEventSupplyCrateWeight
struct FActiveEventSupplyCrateWeight
{
public:
	TArray<TSoftClassPtr<class UObject>>         ReplacementCrateClasses;                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                Weights;                                           // 0x10(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class FName                                  ActiveEvent;                                       // 0x20(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.BuffAddition
struct FBuffAddition
{
public:
	TSoftClassPtr<class APrimalCharacter>        ForClass;                                          // 0x0(0x30)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        BuffAdditions;                                     // 0x30(0x10)(ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.AppIDItem
struct FAppIDItem
{
public:
	class FString                                AchievementID;                                     // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        AchievementIDs;                                    // 0x10(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  GiveItemIfEmoteNameUnlocked;                       // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AppID;                                             // 0x28(0x4)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PlayerBadgeGroup;                                  // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bForceNewDefaultCosmetic;                          // 0x30(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_512E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        PlayerIDStrings;                                   // 0x38(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ItemClass;                                         // 0x48(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        ItemClasses;                                       // 0x50(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.BoneModifierRange
struct FBoneModifierRange
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	struct FVector                               MinScale;                                          // 0x8(0x18)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               MaxScale;                                          // 0x20(0x18)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               MinTranslation;                                    // 0x38(0x18)(Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               MaxTranslation;                                    // 0x50(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Recursive;                                         // 0x68(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_512F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.BoneModifierRangeArray
struct FBoneModifierRangeArray
{
public:
	uint8                                        bAffectsLegLength : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseExtraMax : 1;                                  // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_402 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5131[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinLegLengthMultiplier;                            // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxLegLengthMultiplier;                            // 0x8(0x4)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5132[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FBoneModifierRange>            BoneArray;                                         // 0x10(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             GlobalFatRemap;                                    // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.RandValueRange
struct FRandValueRange
{
public:
	float                                        MinVal;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxVal;                                            // 0x4(0x4)(BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RandPower;                                         // 0x8(0x4)(ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.DinoBabySetup
struct FDinoBabySetup
{
public:
	class FName                                  DinoNameTag;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FBoneModifierRangeArray>       BabyBoneModifierRanges;                            // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                WildRandomScaleRangeWeights;                       // 0x18(0x10)(BlueprintVisible, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRandValueRange>               WildRandomScaleRanges;                             // 0x28(0x10)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA38 (0xA38 - 0x0)
// ScriptStruct ShooterGame.PlayerCharacterGenderDefinition
struct FPlayerCharacterGenderDefinition
{
public:
	class FString                                GenderString;                                      // 0x0(0x10)(Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                CharacterBlueprint;                                // 0x10(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  ColorSetBody;                                      // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  ColorSetHair;                                      // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLinearColor>                  ColorSetEyes;                                      // 0x38(0x10)(ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    CharacterPreviewMaterial;                          // 0x48(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        DefaultCharacterNames;                             // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                DefaultCharacterNameWeights;                       // 0x60(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneModifierRangeArray               CharacterBoneModifierRanges[0x1A];                 // 0x70(0x4E0)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneModifierRangeArray               ExtraCharacterBoneModifierMax[0x1A];               // 0x550(0x4E0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                GlobalBoneModifiers;                               // 0xA30(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Config, GlobalConfig)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.TeamPingData
struct FTeamPingData
{
public:
	uint8                                        PingID;                                            // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5139[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class AActor*                                ToActor;                                           // 0x20(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ByPlayerID;                                        // 0x28(0x4)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TargetingTeam;                                     // 0x2C(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance)
	double                                       CreationTime;                                      // 0x30(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	enum class ETeamPingType                     PingType;                                          // 0x38(0x1)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_513B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PlayerName;                                        // 0x40(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ShooterGame.TeamPingDataForClient
struct FTeamPingDataForClient
{
public:
	class FString                                PingText;                                          // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Location;                                          // 0x10(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class AActor*                                ToActor;                                           // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ByPlayerID;                                        // 0x30(0x4)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_513D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       CreationTime;                                      // 0x38(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, Config, GlobalConfig, SubobjectReference)
	enum class ETeamPingType                     PingType;                                          // 0x40(0x1)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_513F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            PingIcon;                                          // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          PingColor;                                         // 0x50(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PingDuration;                                      // 0x60(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5140[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PlayerName;                                        // 0x68(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class USoundCue*                             SoundOnPing;                                       // 0x78(0x8)(EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.TribeWar
struct FTribeWar
{
public:
	int32                                        EnemyTribeID;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StartDayNumber;                                    // 0x4(0x4)(Edit, ConstParm, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EndDayNumber;                                      // 0x8(0x4)(BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StartDayTime;                                      // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndDayTime;                                        // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsApproved;                                       // 0x14(0x1)(BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5144[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        InitiatingTribeID;                                 // 0x18(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5145[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                EnemyTribeName;                                    // 0x20(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.TribeAlliance
struct FTribeAlliance
{
public:
	class FString                                AllianceName;                                      // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       AllianceID;                                        // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5146[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        MembersTribeName;                                  // 0x18(0x10)(ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               MembersTribeID;                                    // 0x28(0x10)(ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               AdminsTribeID;                                     // 0x38(0x10)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.TribeRankGroup
struct FTribeRankGroup
{
public:
	class FString                                RankGroupName;                                     // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        RankGroupRank;                                     // 0x10(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        InventoryRank;                                     // 0x11(0x1)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        StructureActivationRank;                           // 0x12(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        NewStructureActivationRank;                        // 0x13(0x1)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        NewStructureInventoryRank;                         // 0x14(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        PetOrderRank;                                      // 0x15(0x1)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        PetRidingRank;                                     // 0x16(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        InviteToGroupRank;                                 // 0x17(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        MaxPromotionGroupRank;                             // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        MaxDemotionGroupRank;                              // 0x19(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        MaxBanishmentGroupRank;                            // 0x1A(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        NumInvitesRemaining;                               // 0x1B(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventStructureDemolish : 1;                     // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventStructureAttachment : 1;                   // Mask: 0x2, PropSize: 0x10x1C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventStructureBuildInRange : 1;                 // Mask: 0x4, PropSize: 0x10x1C(0x1)(ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventUnclaiming : 1;                            // Mask: 0x8, PropSize: 0x10x1C(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowInvites : 1;                                 // Mask: 0x10, PropSize: 0x10x1C(0x1)(Edit, ConstParm, Net, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	uint8                                        bLimitInvites : 1;                                 // Mask: 0x20, PropSize: 0x10x1C(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowDemotions : 1;                               // Mask: 0x40, PropSize: 0x10x1C(0x1)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowPromotions : 1;                              // Mask: 0x80, PropSize: 0x10x1C(0x1)(ConstParm, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowBanishments : 1;                             // Mask: 0x1, PropSize: 0x10x1D(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventWirelessCrafting : 1;                      // Mask: 0x2, PropSize: 0x10x1D(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_403 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_514E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        TeleportMembersRank;                               // 0x20(0x1)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        TeleportDinosRank;                                 // 0x21(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5151[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bDefaultRank : 1;                                  // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowPing : 1;                                    // Mask: 0x2, PropSize: 0x10x24(0x1)(Edit, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowRallyPoint : 1;                              // Mask: 0x4, PropSize: 0x10x24(0x1)(EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5154[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ShooterGame.PrimalPlayerCharacterConfigStruct
struct FPrimalPlayerCharacterConfigStruct
{
public:
	uint8                                        bIsFemale : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        BitPad_404 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5156[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          BodyColors[0x4];                                   // 0x4(0x40)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        OverrideHeadHairColor[0x2];                        // 0x44(0x2)(ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        OverrideFacialHairColor[0x2];                      // 0x46(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        FacialHairIndex;                                   // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        HeadHairIndex;                                     // 0x49(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        EyebrowIndex;                                      // 0x4A(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_515B[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PercentOfFullHeadHairGrowth;                       // 0x4C(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PercentOfFullFacialHairGrowth;                     // 0x50(0x4)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_515F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PlayerCharacterName;                               // 0x58(0x10)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RawBoneModifiers[0x1A];                            // 0x68(0x68)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        DynamicMaterialBytes[0x32];                        // 0xD0(0x32)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5161[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        PlayerVoiceCollectionIndex;                        // 0x104(0x4)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUsingCustomPlayerVoiceCollection : 1;             // Mask: 0x1, PropSize: 0x10x108(0x1)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_405 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5163[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        PlayerSpawnRegionIndex;                            // 0x10C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct ShooterGame.CustomTrackedActorInfo
struct FCustomTrackedActorInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	float                                        TameAffinityPercent;                               // 0x10(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HealthPercent;                                     // 0x14(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HealthCurrent;                                     // 0x18(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HealthMax;                                         // 0x1C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HungerPercent;                                     // 0x20(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HungerCurrent;                                     // 0x24(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HungerMax;                                         // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TorpidityPercent;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TameEffectivenessPercent;                          // 0x30(0x4)(Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TameEffectivenessLvlModifier;                      // 0x34(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Location;                                          // 0x38(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bIsConcious;                                       // 0x50(0x1)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseGender;                                        // 0x51(0x1)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsFemale;                                         // 0x52(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance)
	bool                                         bIsTamed;                                          // 0x53(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DinoImprintingQuality;                             // 0x54(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BabyNextCuddleTime;                                // 0x58(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BabyAge;                                           // 0x5C(0x4)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeUntilNextNamedAge;                             // 0x60(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5166[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       LastTameConsumedFoodTime;                          // 0x68(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ImprinterName;                                     // 0x70(0x10)(Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DataID1;                                           // 0x80(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DataID2;                                           // 0x84(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                TargetName;                                        // 0x88(0x10)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	bool                                         bIsPlayer;                                         // 0x98(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsFavorited;                                      // 0x99(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsTrackedWaypoint;                                // 0x9A(0x1)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5168[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DinoEntry;                                         // 0xA0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHideFromTrackListAndOnlyShowOnMap;                // 0xA8(0x1)(ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5169[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                TribeName;                                         // 0xB0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	int32                                        TargetingTeam;                                     // 0xC0(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance)
	bool                                         bIsVehicle;                                        // 0xC4(0x1)(BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsValidForCurrentFilter;                          // 0xC5(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_516B[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Level;                                             // 0xC8(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_516C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TamedAtTime;                                       // 0xD0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	bool                                         POIVisible;                                        // 0xD8(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_516E[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x128 (0x128 - 0x0)
// ScriptStruct ShooterGame.TrackedActorPlusInfoStruct
struct FTrackedActorPlusInfoStruct
{
public:
	class AActor*                                TrackedActor;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCustomTrackedActorInfo               ReplicatedInfo;                                    // 0x8(0xE0)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               ActorLastKnownLocation;                            // 0xE8(0x18)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LastPOILocation;                                   // 0x100(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PreviousLinkedListTrackedActorID;                  // 0x118(0x4)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        PreviousLinkedListTrackedActorCategory;            // 0x11C(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5172[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NextLinkedListTrackedActorID;                      // 0x120(0x4)(ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        NextLinkedListTrackedActorCategory;                // 0x124(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5173[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1A8 (0x1A8 - 0x0)
// ScriptStruct ShooterGame.TribeData
struct FTribeData
{
public:
	class FString                                TribeName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	double                                       LastNameChangeTime;                                // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       OwnerPlayerDataId;                                 // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        TribeID;                                           // 0x1C(0x4)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	TArray<class FString>                        MembersPlayerName;                                 // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               MembersPlayerDataID;                               // 0x30(0x10)(Edit, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                MembersRankGroups;                                 // 0x40(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<double>                               SlotFreedTime;                                     // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               TribeAdmins;                                       // 0x60(0x10)(BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTribeAlliance>                TribeAlliances;                                    // 0x70(0x10)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetGovernment;                                    // 0x80(0x1)(Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5176[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTribeGovernment                      TribeGovernment;                                   // 0x84(0x14)(Edit, ConstParm, ExportObject, Net, ReturnParm, Config)
	TArray<struct FPrimalPlayerCharacterConfigStruct> MembersConfigs;                                    // 0x98(0x10)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTribeWar>                     TribeWars;                                         // 0xA8(0x10)(ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        TribeLog;                                          // 0xB8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig, SubobjectReference)
	int32                                        LogIndex;                                          // 0xC8(0x4)(Edit, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5177[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTribeRankGroup>               TribeRankGroups;                                   // 0xD0(0x10)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumTribeDinos;                                     // 0xE0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5178[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTrackedActorPlusInfoStruct>   CachedTeamTameList_UpdatedOnInterval;              // 0xE8(0x10)(Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastNetworkTimeUpdatedCachedTeamTameList;          // 0xF8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTeamPingData                         RallyPointData;                                    // 0x100(0x50)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHaveRallyPointData;                               // 0x150(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_517A[0x57];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.ItemSetup
struct FItemSetup
{
public:
	class UClass*                                ItemType;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ItemBlueprintPath;                                 // 0x8(0x10)(Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinQuality;                                        // 0x18(0x4)(ConstParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxQuality;                                        // 0x1C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Quantity;                                          // 0x20(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAutoEquip : 1;                                    // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDontStack : 1;                                    // Mask: 0x2, PropSize: 0x10x24(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceBlueprint : 1;                               // Mask: 0x4, PropSize: 0x10x24(0x1)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_517D[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x120 (0x120 - 0x0)
// ScriptStruct ShooterGame.DinoSetup
struct FDinoSetup
{
public:
	class UClass*                                DinoType;                                          // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class APrimalDinoCharacter>    DinoSoftReference;                                 // 0x8(0x30)(BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DinoBlueprintPath;                                 // 0x38(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DinoName;                                          // 0x48(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DinoLevel;                                         // 0x58(0x4)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BasePointsPerStat[0xC];                            // 0x5C(0xC)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        PlayerAddedPointsPerStat[0xC];                     // 0x68(0xC)(Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_517F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               SpawnOffset;                                       // 0x78(0x18)(ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EDinoTamedOrder                   DinoState;                                         // 0x90(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5180[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<enum class EPrimalCharacterStatusValue> PrioritizeStats;                                   // 0x98(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FItemSetup>                    TamedDinoInventory;                                // 0xA8(0x10)(Edit, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                SaddleType;                                        // 0xB8(0x8)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             SaddleSoftReference;                               // 0xC0(0x30)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SaddleBlueprintPath;                               // 0xF0(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SaddleQuality;                                     // 0x100(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SaddleMinRandomQuality;                            // 0x104(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RandomWeight;                                      // 0x108(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsTamed : 1;                                      // Mask: 0x1, PropSize: 0x10x10C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoreMaxTameLimit : 1;                           // Mask: 0x2, PropSize: 0x10x10C(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventSpawningAtTameLimit : 1;                   // Mask: 0x4, PropSize: 0x10x10C(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bBlockTamedDialog : 1;                             // Mask: 0x8, PropSize: 0x10x10C(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAutoEquipSaddle : 1;                              // Mask: 0x10, PropSize: 0x10x10C(0x1)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseFixedSpawnLevel : 1;                           // Mask: 0x20, PropSize: 0x10x10C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_406 : 2;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5183[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        WildRandomScaleOverride;                           // 0x110(0x4)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DinoImprintingQuality;                             // 0x114(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNetInfoFromClient;                                // 0x118(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5184[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DinoSetupGroup
struct FDinoSetupGroup
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RandomWeight;                                      // 0x8(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5187[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDinoSetup>                    Entries;                                           // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	TArray<int32>                                EntriesSpawnNumberLimits;                          // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ItemToDinoStatParams
struct FItemToDinoStatParams
{
public:
	enum class EPrimalItemStat                   ItemStat;                                          // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPrimalCharacterStatusValue       DinoStat;                                          // 0x1(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5189[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MinItemStatValue;                                  // 0x4(0x4)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxItemStatValue;                                  // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinDinoStatValue;                                  // 0xC(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxDinoStatValue;                                  // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESimpleCurve                      ConversionCurve;                                   // 0x14(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_518A[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ShooterGame.NamedTeamDefinition
struct FNamedTeamDefinition
{
public:
	class FName                                  TeamName;                                          // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bTargetingTeamExclusionList : 1;                   // Mask: 0x1, PropSize: 0x10x8(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bTargetingTeamInclusionList : 1;                   // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowTargetsOnOwnTeam : 1;                        // Mask: 0x4, PropSize: 0x10x8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsCarnivore : 1;                                  // Mask: 0x8, PropSize: 0x10x8(0x1)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bTargetPlayersAndTamedOnly : 1;                    // Mask: 0x10, PropSize: 0x10x8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceTargetPlayersAndTamed : 1;                   // Mask: 0x20, PropSize: 0x10x8(0x1)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoredByAllTeams : 1;                            // Mask: 0x40, PropSize: 0x10x8(0x1)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_407 : 1;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_518E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          TeamNameList;                                      // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          TargetingMultiplierTeamNames;                      // 0x20(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          DontGiveDamageTeamList;                            // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          DontReceiveDamageTeamList;                         // 0x40(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          MaximumTargetableDistanceTeams;                    // 0x50(0x10)(Edit, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                MaximumTargetableDistances;                        // 0x60(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                TargetingMultiplierTeamWeights;                    // 0x70(0x10)(Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ShooterGame.ColorDefinition
struct FColorDefinition
{
public:
	class FName                                  ColorName;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ColorValue;                                        // 0x8(0x10)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasOverridePriority;                              // 0x18(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5190[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ExtraItemAttachmentInfo
struct FExtraItemAttachmentInfo
{
public:
	class UActorComponent*                       ExtraComponentsToAttach;                           // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SocketToAttachTo;                                  // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.ItemAttachmentInfo
struct FItemAttachmentInfo
{
public:
	class UActorComponent*                       ComponentToAttach;                                 // 0x0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FExtraItemAttachmentInfo>      ExtraItemAttachmentInfos;                          // 0x8(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SocketToAttachTo;                                  // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCanBuildStructuresOn : 1;                         // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSaddleWithNoCollision : 1;                        // Mask: 0x2, PropSize: 0x10x20(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseParentAnims : 1;                               // Mask: 0x4, PropSize: 0x10x20(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttachToFirstPersonHands : 1;                     // Mask: 0x8, PropSize: 0x10x20(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseBPPostConstructAttachment : 1;                 // Mask: 0x10, PropSize: 0x10x20(0x1)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttachToThirdPersonWeaponMesh : 1;                // Mask: 0x20, PropSize: 0x10x20(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisabled : 1;                                     // Mask: 0x40, PropSize: 0x10x20(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseItemColors : 1;                                // Mask: 0x80, PropSize: 0x10x20(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseIgnoreAttachmentWhenEquipmentOfType : 1;       // Mask: 0x1, PropSize: 0x10x21(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHideCharacterMesh : 1;                            // Mask: 0x2, PropSize: 0x10x21(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttachmentRequireWeaponSupportShield : 1;         // Mask: 0x4, PropSize: 0x10x21(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceDediAttachment : 1;                          // Mask: 0x8, PropSize: 0x10x21(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceVisibleInFirstPerson : 1;                    // Mask: 0x10, PropSize: 0x10x21(0x1)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoreEquipmentForceHideFirstPerson : 1;          // Mask: 0x20, PropSize: 0x10x21(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttachToFirstPersonCamera : 1;                    // Mask: 0x40, PropSize: 0x10x21(0x1)(Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttachToFirstPersonCameraCapsule : 1;             // Mask: 0x80, PropSize: 0x10x21(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPersistShieldRefreshOnWeaponEquip : 1;            // Mask: 0x1, PropSize: 0x10x22(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisableForTaxidermy : 1;                          // Mask: 0x2, PropSize: 0x10x22(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDontAddAttachedParentBounds : 1;                  // Mask: 0x4, PropSize: 0x10x22(0x1)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_408 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5198[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class AActor>                  OnlyUseAttachmentForActorClass;                    // 0x28(0x30)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPrimalEquipmentType              IgnoreAttachmentWhenEquipmentOfType;               // 0x58(0x1)(Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5199[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  AttachedCompName;                                  // 0x5C(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TWeakObjectPtr<class UActorComponent>        AttachedCompReference;                             // 0x64(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_519A[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.LevelExperienceRamp
struct FLevelExperienceRamp
{
public:
	TArray<float>                                ExperiencePointsForLevel;                          // 0x0(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.DamageTypeAdjuster
struct FDamageTypeAdjuster
{
public:
	TSoftClassPtr<class UDamageType>             DamageTypeClass;                                   // 0x0(0x30)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
	float                                        DamageMultiplier;                                  // 0x30(0x4)(ConstParm, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoreMultiplierIfWildDinoAttacker : 1;           // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoreMultiplierIfTamedDinoAttacker : 1;          // Mask: 0x2, PropSize: 0x10x34(0x1)(BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyUseMultiplierIfWildDinoAttacker : 1;          // Mask: 0x4, PropSize: 0x10x34(0x1)(Edit, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyUseMultiplierIfTamedDinoAttacker : 1;         // Mask: 0x8, PropSize: 0x10x34(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyUseMultiplierIfTamed : 1;                     // Mask: 0x10, PropSize: 0x10x34(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_519D[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PrimalCharacterStatusValueDefinition
struct FPrimalCharacterStatusValueDefinition
{
public:
	class UTexture2D*                            StatusValueIcon;                                   // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                StatusValueName;                                   // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLevelUpSetToMaxValue;                             // 0x18(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDisplayHideCurrentValue;                          // 0x19(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDisplayAsPercent;                                 // 0x1A(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51A0[0x5];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.PrimalItemQuality
struct FPrimalItemQuality
{
public:
	struct FLinearColor                          QualityColor;                                      // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                QualityName;                                       // 0x10(0x10)(BlueprintVisible, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        QualityRandomMultiplierThreshold;                  // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CraftingXPMultiplier;                              // 0x24(0x4)(ExportObject, Net, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RepairingXPMultiplier;                             // 0x28(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CraftingResourceRequirementsMultiplier;            // 0x2C(0x4)(ExportObject, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PrimalItemDefinition
struct FPrimalItemDefinition
{
public:
	class UTexture2D*                            ItemTypeIcon;                                      // 0x0(0x8)(Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ItemTypeName;                                      // 0x8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                ItemTypeColor;                                     // 0x18(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51A1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.PrimalItemStatDefinition
struct FPrimalItemStatDefinition
{
public:
	class UTexture2D*                            ItemStatIcon;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ItemStatName;                                      // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.PrimalEquipmentDefinition
struct FPrimalEquipmentDefinition
{
public:
	class UTexture2D*                            EquipmentTypeIcon;                                 // 0x0(0x8)(OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                EquipmentTypeName;                                 // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.StatusValueModifierDescription
struct FStatusValueModifierDescription
{
public:
	class UTexture2D*                            ModifierIcon;                                      // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ModifierName;                                      // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ModifierDescription;                               // 0x18(0x10)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                ModifierColor;                                     // 0x28(0x4)(BlueprintVisible, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDisplayHUDMessage;                                // 0x2C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51A7[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                HUDMessage;                                        // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                HUDMessageColor;                                   // 0x40(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreventDrawingBuffDescription;                    // 0x44(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51A9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        BuffType;                                          // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreventDisplayBuffHUD;                            // 0x4C(0x1)(ConstParm, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51AA[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.PrimalCharacterStatusStateDefinition
struct FPrimalCharacterStatusStateDefinition
{
public:
	enum class EPrimalCharacterStatusValue       StatusValueType;                                   // 0x0(0x1)(Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51AC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        StatusValueThresholdIndex;                         // 0x4(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            StatusStateIcon;                                   // 0x8(0x8)(Edit, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                StatusStateName;                                   // 0x10(0x10)(Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                StatusStateDescription;                            // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                StatusStateNameColor;                              // 0x30(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUsed;                                             // 0x34(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDisplayHUDMessage;                                // 0x35(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51AE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                HUDMessage;                                        // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                HUDMessageColor;                                   // 0x48(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        BuffType;                                          // 0x4C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bPreventDisplayBuffHUD;                            // 0x50(0x1)(ConstParm, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51AF[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.TutorialDefinition
struct FTutorialDefinition
{
public:
	class FString                                TutorialTitle;                                     // 0x0(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                TutorialText;                                      // 0x10(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            TutorialImage;                                     // 0x20(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TutorialDuration;                                  // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NextTutorialIndex;                                 // 0x2C(0x4)(Edit, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ShooterGame.SupplyCrateItemEntry
struct FSupplyCrateItemEntry
{
public:
	class FString                                ItemEntryName;                                     // 0x0(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EntryWeight;                                       // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51B0[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UClass*>                        Items;                                             // 0x18(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<class FString>                        ItemClassStrings;                                  // 0x28(0x10)(EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ItemsWeights;                                      // 0x38(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ItemQuantityOverrides;                             // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinQuantity;                                       // 0x58(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxQuantity;                                       // 0x5C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyQuantityToSingleItem;                        // 0x60(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51B3[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        QuantityPower;                                     // 0x64(0x4)(Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinRandomQuality;                                  // 0x68(0x4)(ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinQuality;                                        // 0x6C(0x4)(ConstParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxQuality;                                        // 0x70(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        QualityPower;                                      // 0x74(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceBlueprint : 1;                               // Mask: 0x1, PropSize: 0x10x78(0x1)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForcePreventGrinding : 1;                         // Mask: 0x2, PropSize: 0x10x78(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Config, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_409 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51B5[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ChanceToBeBlueprintOverride;                       // 0x7C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ItemStatClampsMultiplier;                          // 0x80(0x4)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ChanceToActuallyGiveItem;                          // 0x84(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RequiresMinQuality;                                // 0x88(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51B6[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.SupplyCrateItemSet
struct FSupplyCrateItemSet
{
public:
	class FString                                SetName;                                           // 0x0(0x10)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
	TArray<struct FSupplyCrateItemEntry>         ItemEntries;                                       // 0x10(0x10)(Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinNumItems;                                       // 0x20(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxNumItems;                                       // 0x24(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NumItemsPower;                                     // 0x28(0x4)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SetWeight;                                         // 0x2C(0x4)(ConstParm, EditFixedSize, Parm, OutParm, GlobalConfig)
	bool                                         bItemsRandomWithoutReplacement;                    // 0x30(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51B8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ItemSetOverride;                                   // 0x38(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.ConfigSupplyCrateItemsOverride
struct FConfigSupplyCrateItemsOverride
{
public:
	class FString                                SupplyCrateClassString;                            // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinItemSets;                                       // 0x10(0x4)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxItemSets;                                       // 0x14(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumItemSetsPower;                                  // 0x18(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSetsRandomWithoutReplacement;                     // 0x1C(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51B9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSupplyCrateItemSet>           ItemSets;                                          // 0x20(0x10)(BlueprintVisible, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAppendItemSets;                                   // 0x30(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAppendPreventIncreasingMinMaxItemSets;            // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51BA[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.NPCSpawnLimit
struct FNPCSpawnLimit
{
public:
	TSoftClassPtr<class APrimalDinoCharacter>    NPCClass;                                          // 0x0(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                NPCClassString;                                    // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxPercentageOfDesiredNumToAllow;                  // 0x40(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51BC[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.NPCDifficultyLevelRange
struct FNPCDifficultyLevelRange
{
public:
	TArray<float>                                EnemyLevelsMin;                                    // 0x0(0x10)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                EnemyLevelsMax;                                    // 0x10(0x10)(Edit, ConstParm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                GameDifficulties;                                  // 0x20(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x128 (0x128 - 0x0)
// ScriptStruct ShooterGame.NPCSpawnEntry
struct FNPCSpawnEntry
{
public:
	class FString                                AnEntryName;                                       // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftClassPtr<class APrimalDinoCharacter>> NPCsToSpawn;                                       // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        NPCsToSpawnStrings;                                // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FClassRemappingWeight>         NPCRandomSpawnClassWeights;                        // 0x30(0x10)(Edit, BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       NPCsSpawnOffsets;                                  // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                NPCsToSpawnPercentageChance;                       // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                NPCMinLevelOffset;                                 // 0x60(0x10)(Edit, ConstParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                NPCMaxLevelOffset;                                 // 0x70(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                NPCMinLevelMultiplier;                             // 0x80(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                NPCMaxLevelMultiplier;                             // 0x90(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAddLevelOffsetBeforeMultiplier : 1;               // Mask: 0x1, PropSize: 0x10xA0(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_40A : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51C1[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                NPCOverrideLevel;                                  // 0xA8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               ExtentCheck;                                       // 0xB8(0x18)(EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               GroupSpawnOffset;                                  // 0xD0(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EntryWeight;                                       // 0xE8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ManualSpawnPointSpreadRadius;                      // 0xEC(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WaterOnlySpawnMinimumWaterHeight;                  // 0xF0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaximumWaterHeight;                                // 0xF4(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ColorSets;                                         // 0xF8(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNPCDifficultyLevelRange>      NPCDifficultyLevelRanges;                          // 0x100(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LevelDifficultyTestOverride;                       // 0x110(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpawnMinDistanceFromStructuresMultiplier;          // 0x114(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpawnMinDistanceFromPlayersMultiplier;             // 0x118(0x4)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpawnMinDistanceFromTamedDinosMultiplier;          // 0x11C(0x4)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RandGroupSpawnOffsetZMin;                          // 0x120(0x4)(Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RandGroupSpawnOffsetZMax;                          // 0x124(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.NPCSpawnEntriesContainerAdditions
struct FNPCSpawnEntriesContainerAdditions
{
public:
	class UClass*                                SpawnEntriesContainerClass;                        // 0x0(0x8)(Edit, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SpawnEntriesContainerClassString;                  // 0x8(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSpawnEntriesContainerClassStringUseExactString;   // 0x18(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNPCSpawnEntry>                AdditionalNPCSpawnEntries;                         // 0x20(0x10)(Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNPCSpawnLimit>                AdditionalNPCSpawnLimits;                          // 0x30(0x10)(BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.GrinderItemReplacer
struct FGrinderItemReplacer
{
public:
	class UClass*                                Current;                                           // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class UClass*                                Replacement;                                       // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.InvalidReferenceRedirector
struct FInvalidReferenceRedirector
{
public:
	class FString                                InvalidReferenceKey;                               // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                RedirectedClass;                                   // 0x10(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FSoftObjectPath                       RedirectedClassSoftReference;                      // 0x18(0x20)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        LimitedToMaps;                                     // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.EmoteGroup
struct FEmoteGroup
{
public:
	class FName                                  GroupName;                                         // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          GroupColor;                                        // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            GroupIcon;                                         // 0x18(0x8)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.WorldDefaultItemSet
struct FWorldDefaultItemSet
{
public:
	class FName                                  ItemSetName;                                       // 0x0(0x8)(Edit, ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          MapName;                                           // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFirstTimeEquip;                                   // 0x18(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOnlyGiveItemSetOnce;                              // 0x19(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bEquipOnNewPawn;                                   // 0x1A(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51C3[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ForceEquipIfAppID;                                 // 0x1C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        ItemsToGive;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.EscapeRoom_RoomItemSetup
struct FEscapeRoom_RoomItemSetup
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumItems;                                          // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51C4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UStaticMesh*                           MeshOverride;                                      // 0x10(0x8)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               ScaleOverride;                                     // 0x18(0x18)(ConstParm, ExportObject, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    MaterialOverride;                                  // 0x30(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct ShooterGame.EscapeRoom_RoomSetup
struct FEscapeRoom_RoomSetup
{
public:
	TArray<bool>                                 RoomUnlockRequirements;                            // 0x0(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 UnlockHintTypes;                                   // 0x10(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CorrectHintWeight;                                 // 0x20(0x4)(Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51C5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                MultiplierPerReset;                                // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumDinosToKill;                                    // 0x38(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51C6[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDinoSetupGroup>               RoomGroupDinoSetups;                               // 0x40(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FEscapeRoom_RoomItemSetup             ItemSetup;                                         // 0x50(0x38)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config)
	int32                                        NumHintFloors;                                     // 0x88(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumHintRoomPulses;                                 // 0x8C(0x4)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeToComplete;                                    // 0x90(0x4)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         TeleportToNextRoomOnUnlock;                        // 0x94(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         TeleportToNextRoomOnCorrectOverlap;                // 0x95(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         SpawnEnemiesWithoutUnlockReq;                      // 0x96(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51C7[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        NumDinosPerWave;                                   // 0x98(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WaveInterval;                                      // 0x9C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 ShowIndicatorsForUnlockReqs;                       // 0xA0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxActiveDinos;                                    // 0xB0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UseClosestDinosSpawnToPlayers;                     // 0xB4(0x1)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UseForcedTargeting;                                // 0xB5(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51C8[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MaxAggroDistance;                                  // 0xB8(0x4)(BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         ChooseSingleUniqueUnlockReqForRoom;                // 0xBC(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51C9[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.ExtraEggItem
struct FExtraEggItem
{
public:
	TSoftClassPtr<class UPrimalItem>             DropItem;                                          // 0x0(0x30)(ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  ActiveEventFilter;                                 // 0x30(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ForDinoCharacter;                                  // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DropChance;                                        // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51CA[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.CryopodPersistantBuffs
struct FCryopodPersistantBuffs
{
public:
	class FString                                BuffClassString;                                   // 0x0(0x10)(Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        IDBitMask;                                         // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51CB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.SubtitleStringEntry
struct FSubtitleStringEntry
{
public:
	class FText                                  BaseText;                                          // 0x0(0x18)(BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StartTime;                                         // 0x18(0x4)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        EndTime;                                           // 0x1C(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.SubtitleStringMap
struct FSubtitleStringMap
{
public:
	class FString                                MediaName;                                         // 0x0(0x10)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FSubtitleStringEntry>          Subtitles;                                         // 0x10(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.FakeStaticMeshSocketData
struct FFakeStaticMeshSocketData
{
public:
	class FName                                  FakeSocketName;                                    // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51CC[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            RelativeTransform;                                 // 0x10(0x60)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.AdditionalStaticMeshSockets
struct FAdditionalStaticMeshSockets
{
public:
	TSoftObjectPtr<class UStaticMesh>            ForStaticMesh;                                     // 0x0(0x30)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FFakeStaticMeshSocketData>     AdditionalRelativeSockets;                         // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct ShooterGame.ItemSpawnBlacklistInfo
struct FItemSpawnBlacklistInfo : public FTableRowBase
{
public:
	TSet<TSoftClassPtr<class UPrimalItem>>       ItemClasses;                                       // 0x8(0x50)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ShooterGame.ExplorerNoteSpawn
struct FExplorerNoteSpawn
{
public:
	class FName                                  ExplorerNoteName;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TMap<class FString, struct FTransform>       SpawnLocationByMap;                                // 0x8(0x50)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class AActor>                  ExplorerNoteChestClass;                            // 0x58(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.CachedDBSet
struct FCachedDBSet
{
public:
	class FName                                  ModName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UShooterWeaponDB*                      WeaponDB;                                          // 0x8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalDinoDB*                         DinoDB;                                            // 0x10(0x8)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalStructureDB*                    StructureDB;                                       // 0x18(0x8)(BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalInventoryDB*                    InventoryDB;                                       // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimalMissionDB*                      MissionDB;                                         // 0x28(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.CachedDBAccessor
struct FCachedDBAccessor
{
public:
	struct FCachedDBSet                          CachedDBs;                                         // 0x0(0x30)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCachedDBSet>                  OverrideCachedDBs;                                 // 0x30(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.ComponentAttachmentEntry
struct FComponentAttachmentEntry
{
public:
	class UClass*                                ActorComponentClass;                               // 0x0(0x8)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               ComponentLocationOffset;                           // 0x8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              ComponentRotationOffset;                           // 0x20(0x18)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.DamageHarvestingEntry
struct FDamageHarvestingEntry
{
public:
	float                                        DamageMultiplier;                                  // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HarvestQuantityMultiplier;                         // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DamageHarvestAdditionalEffectiveness;              // 0x8(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DamageDurabilityConsumptionMultiplier;             // 0xC(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowUnderwaterHarvesting : 1;                    // Mask: 0x1, PropSize: 0x10x10(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_40B : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51CD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DamageTypeParent;                                  // 0x18(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                HarvestDamageFXOverride;                           // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.HarvestResourceEntry
struct FHarvestResourceEntry
{
public:
	int32                                        OverrideQuantityMax;                               // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        OverrideQuantityMin;                               // 0x4(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OverrideQuantityRandomPower;                       // 0x8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EntryWeight;                                       // 0xC(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EffectivenessQuantityMultiplier;                   // 0x10(0x4)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EffectivenessQualityMultiplier;                    // 0x14(0x4)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ResourceItem;                                      // 0x18(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        QualityMin;                                        // 0x20(0x4)(Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        QualityMax;                                        // 0x24(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        XPGainMax;                                         // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        XPGainMin;                                         // 0x2C(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftClassPtr<class UDamageType>>     DamageTypeEntryValuesOverrides;                    // 0x30(0x10)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                DamageTypeEntryWeightOverrides;                    // 0x40(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                DamageTypeEntryMinQuantityOverrides;               // 0x50(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                DamageTypeEntryMaxQuantityOverrides;               // 0x60(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bScaleWithDinoBabyAge : 1;                         // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51CE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ItemCraftingConsumptionReplenishment
struct FItemCraftingConsumptionReplenishment
{
public:
	TArray<class UClass*>                        ItemResourceClasses;                               // 0x0(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ToReplaceWithClass;                                // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ItemSpawnActorClassOverride
struct FItemSpawnActorClassOverride
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ActorClassOverride;                                // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.ServerCustomFolder
struct FServerCustomFolder
{
public:
	int32                                        InventoryCompType;                                 // 0x0(0x4)(ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51CF[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                FolderName;                                        // 0x8(0x10)(ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FItemNetID>                    CustomFolderItemIds;                               // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.EventItem
struct FEventItem
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TSoftClassPtr<class UPrimalItem>             Item;                                              // 0x8(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	bool                                         bIsEngram;                                         // 0x38(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51D0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x440 (0x440 - 0x0)
// ScriptStruct ShooterGame.OverrideMultiuseButtonStyle
struct FOverrideMultiuseButtonStyle
{
public:
	struct FButtonStyle                          Style;                                             // 0x0(0x3F0)(ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCustomButtonWidgetStyle              ExtendedStyle;                                     // 0x3F0(0x48)(Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ButtonTextSize;                                    // 0x438(0x4)(ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51D1[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.WirelessResourceData
struct FWirelessResourceData
{
public:
	int32                                        Qty;                                               // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51D2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSet<class UPrimalInventoryComponent*>       Inventories;                                       // 0x8(0x50)(BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.ActorClassAttachmentInfo
struct FActorClassAttachmentInfo
{
public:
	TSoftClassPtr<class AActor>                  OwnerActorClassParent;                             // 0x0(0x30)(BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FItemAttachmentInfo>           ItemAttachmentInfos;                               // 0x30(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  PlayerMeshTextureMaskParamName;                    // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            PlayerMeshTextureMask;                             // 0x48(0x8)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            PlayerMeshNoItemDefaultTextureMask;                // 0x50(0x8)(Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PlayerMeshTextureMaskMaterialIndexNew;             // 0x58(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PlayerMeshTextureMaskMaterialIndexAlt;             // 0x5C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  FPVHandsMeshTextureMaskParamName;                  // 0x60(0x8)(ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            FPVHandsMeshTextureMask;                           // 0x68(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FPVHandsMeshTextureMaskMaterialIndex;              // 0x70(0x4)(ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FPVHandsMeshTextureMaskMaterialIndex2;             // 0x74(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x170 (0x170 - 0x0)
// ScriptStruct ShooterGame.CropItemPhaseData
struct FCropItemPhaseData
{
public:
	float                                        NextStageFertilizerCacheThreshold;                 // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51D3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UStaticMesh>            StageStaticMesh;                                   // 0x8(0x30)(ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    StageStaticMeshes;                                 // 0x38(0x10)(ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UStaticMesh>            HasFruitStageStaticMesh;                           // 0x48(0x30)(Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftObjectPtr<class UStaticMesh>>    HasFruitStageStaticMeshes;                         // 0x78(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               StageStaticMeshScale3D;                            // 0x88(0x18)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               StageStaticMeshTranslationOffset;                  // 0xA0(0x18)(Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              StageStaticMeshRotationOffset;                     // 0xB8(0x18)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       StageStaticMeshScales3D;                           // 0xD0(0x10)(Edit, ConstParm, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       StageStaticMeshTranslationOffsets;                 // 0xE0(0x10)(Edit, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRotator>                      StageStaticMeshRotationOffsets;                    // 0xF0(0x10)(Edit, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        StageReachedItemsToGive;                           // 0x100(0x10)(BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                StageReachedItemsToGiveWeights;                    // 0x110(0x10)(BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        StageBlockCollisions;                              // 0x120(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseStageStructure;                                // 0x121(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51D4[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class APrimalStructure>        StageStructure;                                    // 0x128(0x30)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               StageStructureOffset;                              // 0x158(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.RequiresInventorySubclassMapping
struct FRequiresInventorySubclassMapping
{
public:
	TSoftClassPtr<class UPrimalInventoryComponent> InventoryComponentClassParent;                     // 0x0(0x30)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftClassPtr<class UPrimalInventoryComponent>> RequiresInventoryComponentClassChildren;           // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct ShooterGame.SaddlePassengerSeatDefinition
struct FSaddlePassengerSeatDefinition
{
public:
	class FName                                  AttachBoneName;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AttachBoneNameEnemyDino;                           // 0x8(0x8)(ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AttachBoneNameDino;                                // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                BoardActionText;                                   // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            BoardActionIcon;                                   // 0x28(0x8)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               UnboardLocationOffset;                             // 0x30(0x18)(Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                BoardingRequiresEngram;                            // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               FPVCameraLocationOffset;                           // 0x50(0x18)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AttachRelativeLocation;                            // 0x68(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              AttachRelativeRotation;                            // 0x80(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              DinoOverrideAttachRelativeRotation;                // 0x98(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UAnimSequence>          CharacterAdditiveAnim;                             // 0xB0(0x30)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHideCharacterLowerBody : 1;                       // Mask: 0x1, PropSize: 0x10xE0(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseCharacterPitch : 1;                            // Mask: 0x2, PropSize: 0x10xE0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bLimitCameraYaw : 1;                               // Mask: 0x4, PropSize: 0x10xE0(0x1)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseDinoRotationToLimitCameraYaw : 1;              // Mask: 0x8, PropSize: 0x10xE0(0x1)(OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bWeaponIgnoreDino : 1;                             // Mask: 0x10, PropSize: 0x10xE0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHideDinoForLocalPassenger : 1;                    // Mask: 0x20, PropSize: 0x10xE0(0x1)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        CharacterAdditiveAnimIsNonAdditive : 1;            // Mask: 0x40, PropSize: 0x10xE0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowDinoPassenger : 1;                           // Mask: 0x80, PropSize: 0x10xE0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventManualPassenger : 1;                       // Mask: 0x1, PropSize: 0x10xE1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDinoOverrideAttachRelativeRotation : 1;           // Mask: 0x2, PropSize: 0x10xE1(0x1)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseBoneNameDinoOverride : 1;                      // Mask: 0x4, PropSize: 0x10xE1(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSavePassenger : 1;                                // Mask: 0x8, PropSize: 0x10xE1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventDamageToSeatedDino : 1;                    // Mask: 0x10, PropSize: 0x10xE1(0x1)(ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_40C : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51D5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CameraYawRange;                                    // 0xE4(0x4)(Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AimOffsetYawFactor;                                // 0xE8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AimOffsetPitchFactor;                              // 0xEC(0x4)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AimOffsetYawBias;                                  // 0xF0(0x4)(ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AimOffsetPitchBias;                                // 0xF4(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ExtraHypoThermalInsulation;                        // 0xF8(0x4)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ExtraHyperThermalInsulation;                       // 0xFC(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsSaddleTurret : 1;                               // Mask: 0x1, PropSize: 0x10x100(0x1)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bLimitTurretPitch : 1;                             // Mask: 0x2, PropSize: 0x10x100(0x1)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_40D : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51D6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TurretPitchMin;                                    // 0x104(0x4)(Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TurretPitchMax;                                    // 0x108(0x4)(ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowOrbitCam : 1;                                // Mask: 0x1, PropSize: 0x10x10C(0x1)(BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowTPV : 1;                                     // Mask: 0x2, PropSize: 0x10x10C(0x1)(ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventPassengerWeapons : 1;                      // Mask: 0x4, PropSize: 0x10x10C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAllowAccessDinoInventory : 1;                     // Mask: 0x8, PropSize: 0x10x10C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUnboardUseLastRotation : 1;                       // Mask: 0x10, PropSize: 0x10x10C(0x1)(ConstParm, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51D7[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x24 (0x24 - 0x0)
// ScriptStruct ShooterGame.ItemStatInfo
struct FItemStatInfo
{
public:
	uint8                                        bUsed : 1;                                         // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCalculateAsPercent : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisplayAsPercent : 1;                             // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRequiresSubmerged : 1;                            // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventIfSubmerged : 1;                           // Mask: 0x10, PropSize: 0x10x0(0x1)(ConstParm, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHideStatFromTooltip : 1;                          // Mask: 0x20, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_40E : 2;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51D8[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        DefaultModifierValue;                              // 0x4(0x4)(BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        RandomizerRangeOverride;                           // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RandomizerRangeMultiplier;                         // 0xC(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TheRandomizerPower;                                // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        StateModifierScale;                                // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        InitialValueConstant;                              // 0x18(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RatingValueMultiplier;                             // 0x1C(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AbsoluteMaxValue;                                  // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.UnreplicatedEggData
struct FUnreplicatedEggData
{
public:
	TArray<int32>                                EggNumberOfLevelUpPointsApplied;                   // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<int32>                                EggNumberMutationsApplied;                         // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        EggTamedIneffectivenessModifier;                   // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51D9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                EggColorSetIndices;                                // 0x28(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FDinoAncestorsEntryBlueprint>  EggDinoAncestors;                                  // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<struct FDinoAncestorsEntryBlueprint>  EggDinoAncestorsMale;                              // 0x48(0x10)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        EggRandomMutationsFemale;                          // 0x58(0x4)(BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        EggRandomMutationsMale;                            // 0x5C(0x4)(ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	int32                                        EggGenderOverride;                                 // 0x60(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51DA[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.UseItemAddCharacterStatusValue
struct FUseItemAddCharacterStatusValue
{
public:
	float                                        BaseAmountToAdd;                                   // 0x0(0x4)(BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPercentOfMaxStatusValue : 1;                      // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPercentOfCurrentStatusValue : 1;                  // Mask: 0x2, PropSize: 0x10x4(0x1)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseItemQuality : 1;                               // Mask: 0x4, PropSize: 0x10x4(0x1)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDontRequireLessThanMaxToUse : 1;                  // Mask: 0x8, PropSize: 0x10x4(0x1)(ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAddOverTime : 1;                                  // Mask: 0x10, PropSize: 0x10x4(0x1)(Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAddOverTimeSpeedInSeconds : 1;                    // Mask: 0x20, PropSize: 0x10x4(0x1)(Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bContinueOnUnchangedValue : 1;                     // Mask: 0x40, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSetValue : 1;                                     // Mask: 0x80, PropSize: 0x10x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSetAdditionalValue : 1;                           // Mask: 0x1, PropSize: 0x10x5(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bResetExistingModifierDescriptionIndex : 1;        // Mask: 0x2, PropSize: 0x10x5(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceUseStatOnDinos : 1;                          // Mask: 0x4, PropSize: 0x10x5(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_40F : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51DB[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LimitExistingModifierDescriptionToMaxAmount;       // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AddOverTimeSpeed;                                  // 0xC(0x4)(Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PercentAbsoluteMaxValue;                           // 0x10(0x4)(ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PercentAbsoluteMinValue;                           // 0x14(0x4)(Edit, ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StatusValueModifierDescriptionIndex;               // 0x18(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ItemQualityAddValueMultiplier;                     // 0x1C(0x4)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPrimalCharacterStatusValue       StatusValueType;                                   // 0x20(0x1)(Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPrimalCharacterStatusValue       StopAtValueNearMax;                                // 0x21(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51DC[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class UDamageType>             ScaleValueByCharacterDamageType;                   // 0x28(0x30)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bForceImmediateTick;                               // 0x58(0x1)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51DD[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ItemCraftQueueEntry
struct FItemCraftQueueEntry
{
public:
	struct FItemNetID                            ItemID;                                            // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance)
	int32                                        Quantity;                                          // 0x8(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsRepair;                                         // 0xC(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIgnoreInventoryRequirement;                       // 0xD(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51DE[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        RepairPercentage;                                  // 0x10(0x4)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RepairSpeedMultiplier;                             // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.CustomContextSubmenu
struct FCustomContextSubmenu
{
public:
	class FName                                  SubmenuName;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          SubmenuOptions;                                    // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.CustomContextMenuData
struct FCustomContextMenuData
{
public:
	class FName                                  ContextItemName;                                   // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  DisplayString;                                     // 0x8(0x18)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  OptionalKeybindName;                               // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.PrimalMapMarkerEntryData
struct FPrimalMapMarkerEntryData
{
public:
	int32                                        Coord1;                                            // 0x0(0x4)(ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Coord2;                                            // 0x4(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Name;                                              // 0x8(0x10)(ConstParm, Net, OutParm)
	bool                                         bOverrideMarkerTextColor;                          // 0x18(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51DF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FColor                                OverrideMarkerTextColor;                           // 0x1C(0x4)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Coord1f;                                           // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Coord2f;                                           // 0x24(0x4)(ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.MapMarkerPerMapInfo
struct FMapMarkerPerMapInfo
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalMapMarkerEntryData>     MapMarkers;                                        // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct ShooterGame.ArkTributePlayerDataListing
struct FArkTributePlayerDataListing
{
public:
	uint64                                       PlayerDataID;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FString                                PlayerName;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class FString                                PlayerStats[0xC];                                  // 0x18(0xC0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         bWasAllowDPCUpload;                                // 0xD8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51E0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                UploadingServerMapName;                            // 0xE0(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	class FString                                UploadingServerName;                               // 0xF0(0x10)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	bool                                         bWithItems;                                        // 0x100(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51E1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint32                                       ItemCount;                                         // 0x104(0x4)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        Version;                                           // 0x108(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint32                                       ExpirationTimeUTC;                                 // 0x10C(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	TArray<uint8>                                PlayerDataBytes;                                   // 0x110(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ShooterGame.ARKTributeDinoListing
struct FARKTributeDinoListing
{
public:
	class FString                                DinoName;                                          // 0x0(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DinoStats[0xC];                                    // 0x10(0xC0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DinoExperiencePoints;                              // 0xD0(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51E2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DinoClass;                                         // 0xD8(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       DinoID1;                                           // 0xE0(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	uint32                                       DinoID2;                                           // 0xE4(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	uint32                                       ExpirationTimeUTC;                                 // 0xE8(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51E3[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x134 (0x138 - 0x4)
// ScriptStruct ShooterGame.ARKTributeDino
struct FARKTributeDino : public FArkTributeEntity
{
public:
	uint8                                        Pad_51E4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class APrimalDinoCharacter>    DinoClassPtr;                                      // 0x8(0x30)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint8>                                DinoData;                                          // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DinoName;                                          // 0x48(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DinoNameInMap;                                     // 0x58(0x10)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DinoStats[0xC];                                    // 0x68(0xC0)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DinoExperiencePoints;                              // 0x128(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Version;                                           // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint32                                       DinoID1;                                           // 0x130(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	uint32                                       DinoID2;                                           // 0x134(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
};

// 0x1EC (0x1F0 - 0x4)
// ScriptStruct ShooterGame.ArkTributeInventoryItem
struct FArkTributeInventoryItem : public FArkTributeEntity
{
public:
	uint8                                        Pad_51E5[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FItemNetInfo                          ArkTributeItem;                                    // 0x8(0x1E0)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Version;                                           // 0x1E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        Pad_51E6[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.ArkInventoryData
struct FArkInventoryData
{
public:
	TArray<struct FArkTributeInventoryItem>      ArkItems;                                          // 0x0(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FARKTributeDino>               ArkTamedDinosData;                                 // 0x10(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FArkTributePlayerData>         ArkPlayerData;                                     // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.EngramCustomFolder
struct FEngramCustomFolder
{
public:
	class FString                                FolderName;                                        // 0x0(0x10)(ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        EngramCustomFolderItemClasses;                     // 0x10(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.PhotoModeMotionControlTrackData
struct FPhotoModeMotionControlTrackData
{
public:
	float                                        TickTime;                                          // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51E7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TickLoc;                                           // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              TickRot;                                           // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FocalLength;                                       // 0x38(0x4)(ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FocusDistance;                                     // 0x3C(0x4)(Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Aperture;                                          // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51E8[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PhotoModeMotionControlTrackInfo
struct FPhotoModeMotionControlTrackInfo
{
public:
	struct FVector                               StartLoc;                                          // 0x0(0x18)(ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              StartRot;                                          // 0x18(0x18)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPhotoModeMotionControlTrackData> TickData;                                          // 0x30(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.DinoOrderID
struct FDinoOrderID
{
public:
	int32                                        DinoID1;                                           // 0x0(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	int32                                        DinoID2;                                           // 0x4(0x4)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                DinoName;                                          // 0x8(0x10)(EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.DinoOrderGroup
struct FDinoOrderGroup
{
public:
	class FString                                DinoOrderGroupName;                                // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        DinoOrderClasses;                                  // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FDinoOrderID>                  DinoOrderIDs;                                      // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2D8 (0x2D8 - 0x0)
// ScriptStruct ShooterGame.PrimalPersistentCharacterStatsStruct
struct FPrimalPersistentCharacterStatsStruct
{
public:
	uint16                                       CharacterStatusComponent_ExtraCharacterLevel;      // 0x0(0x2)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51E9[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        CharacterStatusComponent_ExperiencePoints;         // 0x4(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PlayerState_TotalEngramPoints;                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PlayerState_PurchasedEngramPoints;                 // 0xC(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CharacterStatusComponent_HighestExtraCharacterLevel; // 0x10(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CharacterStatusComponent_LastRespecAtExtraCharacterLevel; // 0x14(0x4)(ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       CharacterStatusComponent_LastRespecUtcTimeSeconds; // 0x18(0x8)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               PerMapExplorerNoteUnlocks;                         // 0x20(0x10)(ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          PerMapNamedExplorerNoteUnlocks;                    // 0x30(0x10)(ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          EmoteUnlocks;                                      // 0x40(0x10)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UClass*>                        PlayerState_EngramBlueprints;                      // 0x50(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        CharacterStatusComponent_NumberOfLevelUpPointsApplied[0xC]; // 0x60(0xC)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51EA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                PlayerState_DefaultItemSlotClasses[0xA];           // 0x70(0x50)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        PlayerState_DefaultItemSlotEngrams[0xA];           // 0xC0(0xA)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51EB[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDinoOrderGroup                       DinoOrderGroups[0xA];                              // 0xD0(0x1E0)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CurrentlySelectedDinoOrderGroup;                   // 0x2B0(0x4)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PercentageOfHeadHairGrowth;                        // 0x2B4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasUnlockedAllExplorerNotes;                      // 0x2B8(0x1)(Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51EC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PercentageOfFacialHairGrowth;                      // 0x2BC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        FacialHairIndex;                                   // 0x2C0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        HeadHairIndex;                                     // 0x2C1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        EyebrowIndex;                                      // 0x2C2(0x1)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51ED[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UClass*>                        ForcedUnlockDefaultCosmetics;                      // 0x2C8(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ShooterGame.LatestMissionScore
struct FLatestMissionScore
{
public:
	class FName                                  MissionTag;                                        // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLeaderboardRow                       LatestScore;                                       // 0x8(0x48)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLeaderboardRow                       BestScore;                                         // 0x50(0x48)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasValidScore;                                    // 0x98(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51EE[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.VectorBoolPair
struct FVectorBoolPair
{
public:
	struct FVector                               VectorVal;                                         // 0x0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         BoolVal;                                           // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51EF[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.TrackedActorIDCategoryPair
struct FTrackedActorIDCategoryPair
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class ETrackedActorCategory             Category;                                          // 0x4(0x1)(ExportObject, Parm, OutParm, Transient)
	uint8                                        Pad_51F0[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.TrackedActorIDCategoryPairWithBool
struct FTrackedActorIDCategoryPairWithBool
{
public:
	int32                                        ID;                                                // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class ETrackedActorCategory             Category;                                          // 0x4(0x1)(ExportObject, Parm, OutParm, Transient)
	bool                                         BoolVal;                                           // 0x5(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51F1[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x508 (0x508 - 0x0)
// ScriptStruct ShooterGame.PrimalPlayerDataStruct
struct FPrimalPlayerDataStruct
{
public:
	uint64                                       PlayerDataID;                                      // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FUniqueNetIdRepl                      UniqueID;                                          // 0x8(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	class FString                                SavedNetworkAddress;                               // 0x38(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PlayerName;                                        // 0x48(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	uint32                                       LocalPlayerIndex;                                  // 0x58(0x4)(BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bFirstSpawned : 1;                                 // Mask: 0x1, PropSize: 0x10x5C(0x1)(ExportObject, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseSpectator : 1;                                 // Mask: 0x2, PropSize: 0x10x5C(0x1)(OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_410 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51F2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalPlayerCharacterConfigStruct    MyPlayerCharacterConfig;                           // 0x60(0x110)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LastPinCodeUsed;                                   // 0x170(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51F3[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalPersistentCharacterStatsStruct MyPersistentCharacterStats;                        // 0x178(0x2D8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumPersonalDinos;                                  // 0x450(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TribeID;                                           // 0x454(0x4)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	TArray<int32>                                AppIDSet;                                          // 0x458(0x10)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PlayerDataVersion;                                 // 0x468(0x4)(BlueprintVisible, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51F4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       NextAllowedRespawnTime;                            // 0x470(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastTimeDiedToEnemyTeam;                           // 0x478(0x8)(Edit, ConstParm, ExportObject, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LoginTime;                                         // 0x480(0x8)(Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastLoginTime;                                     // 0x488(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AllowedRespawnInterval;                            // 0x490(0x4)(Edit, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NumOfDeaths;                                       // 0x494(0x4)(ConstParm, ExportObject, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SpawnDayNumber;                                    // 0x498(0x4)(ConstParm, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpawnDayTime;                                      // 0x49C(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastInventoryRetrievalUTCTime;                     // 0x4A0(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       SuicideCooldownStartTime;                          // 0x4A8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLatestMissionScore>           LatestMissionScores;                               // 0x4B0(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTrackedActorPlusInfoStruct>   PersonalCachedTeamActorList_UpdatedOnInterval;     // 0x4C0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastNetworkTimeUpdatedPersonalCachedTeamActorLists; // 0x4D0(0x8)(Edit, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVectorBoolPair>               ServerSavedLastDeathLocations;                     // 0x4D8(0x10)(Edit, ConstParm, ExportObject, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTrackedActorIDCategoryPair>   SavedFavoritedTrackedActorInfo;                    // 0x4E8(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FTrackedActorIDCategoryPairWithBool> SavedWaypointTrackedActorInfo;                     // 0x4F8(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.EngramsSetSoftReferenceMapping
struct FEngramsSetSoftReferenceMapping
{
public:
	TArray<class FString>                        EngramSetToUnlock;                                 // 0x0(0x10)(BlueprintVisible, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.BossEngramsSoftReferenceMapping
struct FBossEngramsSoftReferenceMapping
{
public:
	TArray<struct FEngramsSetSoftReferenceMapping> EngramSets;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ShooterGame.ManagedBoneSetup
struct FManagedBoneSetup
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	enum class ETraceType                        TraceType;                                         // 0x8(0x1)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bNoHitDefaultToCenter : 1;                         // Mask: 0x1, PropSize: 0x10x9(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_411 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51F5[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        StartOffset;                                       // 0xC(0x4)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        LineTraceLength;                                   // 0x10(0x4)(BlueprintVisible, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LaunchSpeed;                                       // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        GravityOverride;                                   // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PrimalChatFontData
struct FPrimalChatFontData
{
public:
	class FName                                  FontName;                                          // 0x0(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FontSize;                                          // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	struct FSlateColor                           FontColor;                                         // 0xC(0x14)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.SkinNetMessageParams
struct FSkinNetMessageParams
{
public:
	TArray<float>                                FloatParams;                                       // 0x0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        StringParams;                                      // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UObject*>                       ObjectParams;                                      // 0x20(0x10)(BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          NameParams;                                        // 0x30(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.DestructionGeoCollectionInfo
struct FDestructionGeoCollectionInfo
{
public:
	TSoftObjectPtr<class UGeometryCollection>    SoftDestructionGeoCollectionAsset;                 // 0x0(0x30)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DestructibleMeshLocationOffset;                    // 0x30(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DestructibleMeshScaleOverride;                     // 0x48(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              DestructibleMeshRotationOffset;                    // 0x60(0x18)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ShooterGame.PrimalStructureSkinData
struct FPrimalStructureSkinData
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(Edit, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TSoftObjectPtr<class UStaticMesh>            Mesh;                                              // 0x8(0x30)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               MeshLoc;                                           // 0x38(0x18)(ConstParm, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              MeshRot;                                           // 0x50(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               MeshScale;                                         // 0x68(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ColorRegions;                                      // 0x80(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FDestructionGeoCollectionInfo> DestroyedMeshes;                                   // 0x90(0x10)(Edit, BlueprintVisible, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PrimalStructureSnapTagSettings
struct FPrimalStructureSnapTagSettings
{
public:
	TArray<class FName>                          SnapToStructureTagsToExclude;                      // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          SnapFromStructureTagsToExclude;                    // 0x10(0x10)(ConstParm, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          SnapToStructureTagsToInclude;                      // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          SnapFromStructureTagsToInclude;                    // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ShooterGame.PrimalStructureSnapPointOverride
struct FPrimalStructureSnapPointOverride
{
public:
	class UStaticMesh*                           StaticMeshOverride;                                // 0x0(0x8)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class APrimalStructure>        StructureClassOverride;                            // 0x8(0x30)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PreviewLocOffset;                                  // 0x38(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              PreviewRotOffset;                                  // 0x50(0x18)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PreviewScaleOffset;                                // 0x68(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         PreviewTransformOverride;                          // 0x80(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51F6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class APrimalStructure*                      StructureClassCDO;                                 // 0x88(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1A8 (0x1A8 - 0x0)
// ScriptStruct ShooterGame.PrimalStructureSnapPoint
struct FPrimalStructureSnapPoint
{
public:
	class FName                                  SnapPointDescription;                              // 0x0(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PointLocOffset;                                    // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              PointRotOffset;                                    // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              PointComparisonExtraRotOffset;                     // 0x38(0x18)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttachToPoint : 1;                                // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttachFromPoint : 1;                              // Mask: 0x2, PropSize: 0x10x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHighPriorityAttachToPoint : 1;                    // Mask: 0x4, PropSize: 0x10x50(0x1)(ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSnapToUseAlternatePlacemenTraceScale : 1;         // Mask: 0x8, PropSize: 0x10x50(0x1)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAttachToDisableEncroachmentCheck : 1;             // Mask: 0x10, PropSize: 0x10x50(0x1)(Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bInvalidForStructureLinking : 1;                   // Mask: 0x20, PropSize: 0x10x50(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSnapForceNoGroundRequirement : 1;                 // Mask: 0x40, PropSize: 0x10x50(0x1)(Edit, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSnapToOnlyAllowSingleAttachment : 1;              // Mask: 0x80, PropSize: 0x10x50(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPorthole : 1;                                     // Mask: 0x1, PropSize: 0x10x51(0x1)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseBPOverrideAllowSnapPoint : 1;                  // Mask: 0x2, PropSize: 0x10x51(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_412 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51F7[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ToPointSnapTypeFlags;                              // 0x54(0x4)(BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FIntVector                            ExtraSnapTypeFlags;                                // 0x58(0xC)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ToPointSnapTypeExcludeFlags;                       // 0x64(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FIntVector                            ExtraSnapTypeExcludeFlags;                         // 0x68(0xC)(Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SnapPointMatchGroup;                               // 0x74(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FIntVector                            ExtraSnapPointMatchGroup;                          // 0x78(0xC)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SnapTag;                                           // 0x84(0x8)(BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  StaticMeshSnapSocketName;                          // 0x8C(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51F8[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<TSoftClassPtr<class APrimalStructure>> SnapToStructureTypesToExclude;                     // 0x98(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftClassPtr<class APrimalStructure>> SnapFromStructureTypesToExclude;                   // 0xA8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftClassPtr<class APrimalStructure>> SnapToStructureTypesToInclude;                     // 0xB8(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftClassPtr<class APrimalStructure>> SnapFromStructureTypesToInclude;                   // 0xC8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalStructureSnapTagSettings       SnapTags;                                          // 0xD8(0x40)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalStructureSnapPointOverride     SnapPointOverride;                                 // 0x118(0x90)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ShooterGame.PlacementData
struct FPlacementData
{
public:
	struct FVector                               AdjustedLocation;                                  // 0x0(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              AdjustedRotation;                                  // 0x18(0x18)(Edit, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSnapped;                                          // 0x30(0x1)(BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDisableEncroachmentCheck;                         // 0x31(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51F9[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MySnapToIndex;                                     // 0x34(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TheirSnapToIndex;                                  // 0x38(0x4)(Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51FA[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                FloorHitActor;                                     // 0x40(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalStructure*                      ParentStructure;                                   // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalStructure*                      ForcePlacedOnFloorParentStructure;                 // 0x50(0x8)(ConstParm, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalStructure*                      ReplacesStructure;                                 // 0x58(0x8)(ExportObject, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APawn*                                 AttachToPawn;                                      // 0x60(0x8)(Edit, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  AttachToBone;                                      // 0x68(0x8)(ConstParm, ExportObject, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class APrimalDinoCharacter*                  DinoCharacter;                                     // 0x70(0x8)(ConstParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HeightOffset;                                      // 0x78(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        YawRotOffset;                                      // 0x7C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PlacingAlignmentMode;                              // 0x80(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIgnoreSnappingIfOptional;                         // 0x84(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsChoosingRotation;                               // 0x85(0x1)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51FB[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PrimalDroppedItemOnPlatform
struct FPrimalDroppedItemOnPlatform
{
public:
	struct FVector                               ItemRelativeLocation;                              // 0x0(0x18)(ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              ItemRelativeRotation;                              // 0x18(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  BoneName;                                          // 0x30(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	class APrimalStructureItemContainer*         MyItem;                                            // 0x38(0x8)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ItemToDisplayInStructureTooltip
struct FItemToDisplayInStructureTooltip
{
public:
	class UClass*                                PrimalItem;                                        // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, EditFixedSize, GlobalConfig)
	int32                                        Quantity;                                          // 0x8(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51FC[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ModuleGroupHeader;                                 // 0x10(0x10)(Edit, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.SeatingSpot
struct FSeatingSpot
{
public:
	int32                                        SeatNumber;                                        // 0x0(0x4)(Edit, ConstParm, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_51FD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LocationOffset;                                    // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x20(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.Porthole
struct FPorthole
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	int32                                        Index;                                             // 0x18(0x4)(EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	class FName                                  DisplayName;                                       // 0x1C(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient)
	uint8                                        Pad_51FE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UBoxComponent*                         CollisionComp;                                     // 0x28(0x8)(Edit, ExportObject, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.KeyBindingItem
struct FKeyBindingItem
{
public:
	uint8                                        bIsAxisMapping : 1;                                // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_413 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_51FF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  WidgetName;                                        // 0x4(0x8)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5200[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ActionName;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	float                                        Scale;                                             // 0x20(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint8                                        Pad_5201[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x40 - 0x20)
// ScriptStruct ShooterGame.ControllerEvent
struct FControllerEvent : public FInputEvent
{
public:
	uint8                                        Pad_5202[0x20];                                    // Fixing Size Of Struct > TateDumper <
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ShooterGame.PrimalWirelessReferences
struct FPrimalWirelessReferences
{
public:
	TSet<class APrimalStructureItemContainer*>   WirelessSources;                                   // 0x0(0x50)(Edit, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSet<class APrimalStructureItemContainer*>   WirelessConsumers;                                 // 0x50(0x50)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.PropertyModifierDefinition
struct FPropertyModifierDefinition
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
	bool                                         bNeedsManualReplication;                           // 0x8(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EWorldBuffPropertyLocation        BuffPropertyLocation;                              // 0x9(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5203[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ModifierValue;                                     // 0xC(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ShooterGame.WorldBuffDefinition
struct FWorldBuffDefinition
{
public:
	class FName                                  WorldBuffIdentifier;                               // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  WorldBuffDisplayTitle;                             // 0x8(0x18)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          WorldBuffDisplayTitleColor;                        // 0x20(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  WorldBuffDisplayText;                              // 0x30(0x18)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            WorldBuffDisplayIcon;                              // 0x48(0x8)(ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  WorldBuffServerNotificationText;                   // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          WorldBuffServerNotificationTextColor;              // 0x68(0x10)(ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            WorldBuffServerNotificationIcon;                   // 0x78(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            WorldBuffServerNotificationSound;                  // 0x80(0x8)(EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StackLimit;                                        // 0x88(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WorldBuffDuration;                                 // 0x8C(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          WorldBuffsToRemoveOnStart;                         // 0x90(0x10)(ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          WorldBuffsToPreventWhileActive;                    // 0xA0(0x10)(ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TimeFromEndToAllowReplacement;                     // 0xB0(0x4)(ConstParm, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  WorldBuffSetName;                                  // 0xB4(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EWorldBuffDifficultyType          BuffDifficulty;                                    // 0xBC(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5204[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DifficultyDisplayText;                             // 0xC0(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRefreshTimerAtFullStacks : 1;                     // Mask: 0x1, PropSize: 0x10xD0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bStacksExtendDuration : 1;                         // Mask: 0x2, PropSize: 0x10xD0(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bStacksIncreaseEffect : 1;                         // Mask: 0x4, PropSize: 0x10xD0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRemoveAllOtherWorldBuffsOnStart : 1;              // Mask: 0x8, PropSize: 0x10xD0(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventAddingAnyOtherWorldBuffs : 1;              // Mask: 0x10, PropSize: 0x10xD0(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceDisableServerNotifications : 1;              // Mask: 0x20, PropSize: 0x10xD0(0x1)(BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_414 : 2;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5205[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                WorldBuffCustomImplementation;                     // 0xD8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPropertyModifierDefinition>   PropertyModifiers;                                 // 0xE0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.FoliageReskinDefinition
struct FFoliageReskinDefinition
{
public:
	class FString                                ForFoliage;                                        // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            NewFoliageMaterials;                               // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UMaterialInterface*>            OverrideDestructionMaterials;                      // 0x20(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.LevelStaticMeshReskinDefinition
struct FLevelStaticMeshReskinDefinition
{
public:
	class FString                                MaterialNameToReplace;                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    NewMaterial;                                       // 0x10(0x8)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, DuplicateTransient)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.SublevelOverrideDefinition
struct FSublevelOverrideDefinition
{
public:
	class FName                                  SublevelPackageToReplace;                          // 0x0(0x8)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SublevelPackageToActivate;                         // 0x8(0x8)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.SublevelOverrideGroup
struct FSublevelOverrideGroup
{
public:
	class FString                                ForMapName;                                        // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseSublevelOverrides;                             // 0x10(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5206[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSublevelOverrideDefinition>   SublevelOverrides;                                 // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FLevelStaticMeshReskinDefinition> StaticMeshReskins;                                 // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.ActiveEventGlobalStatusAdjustments
struct FActiveEventGlobalStatusAdjustments
{
public:
	class FName                                  ActiveEvent;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        GlobalStatusAdjustmentRateMultipliersPositive[0xC]; // 0x8(0x30)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        GlobalStatusAdjustmentRateMultipliersNegative[0xC]; // 0x38(0x30)(Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.CustomWheelSettings
struct FCustomWheelSettings
{
public:
	class FString                                CenterText;                                        // 0x0(0x10)(ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          CenterTextColorOverride;                           // 0x10(0x10)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             CenterImageSize;                                   // 0x20(0x10)(ConstParm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            CenterImage;                                       // 0x30(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinNumDivisions;                                   // 0x38(0x4)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        InnerDistance;                                     // 0x3C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OuterDistance;                                     // 0x40(0x4)(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseCenterTextColorOverride : 1;                   // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5207[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.CustomWheelEntry
struct FCustomWheelEntry
{
public:
	TWeakObjectPtr<class UObject>                Target;                                            // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
	class FString                                TargetFunctionName;                                // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Label;                                             // 0x18(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Priority;                                          // 0x28(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        ActivationTime;                                    // 0x2C(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            ActivationSound;                                   // 0x30(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CustomDataInt;                                     // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  CustomDataName;                                    // 0x3C(0x8)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FLinearColor                          TextColorOverride;                                 // 0x44(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BackgroundColorOverride;                           // 0x54(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseTextColorOverride : 1;                         // Mask: 0x1, PropSize: 0x10x64(0x1)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseBackgroundColorOverride : 1;                   // Mask: 0x2, PropSize: 0x10x64(0x1)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPersistWheelOnActivation : 1;                     // Mask: 0x4, PropSize: 0x10x64(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x8, PropSize: 0x10x64(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        bDrawMultiUseOption : 1;                           // Mask: 0x10, PropSize: 0x10x64(0x1)(Edit, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_415 : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5208[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                BPDrawEntryTargetRef;                              // 0x68(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x30 - 0x28)
// ScriptStruct ShooterGame.ShooterCharacterPostUpdateTickFunction
struct FShooterCharacterPostUpdateTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_5209[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.PlayerStatusStateCharacterSound
struct FPlayerStatusStateCharacterSound
{
public:
	enum class EPrimalCharacterStatusState       StateType;                                         // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_520A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            SoundToPlay;                                       // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.AllyRadarDatas
struct FAllyRadarDatas
{
public:
	struct FVector                               LastKnownPlayerLocation;                           // 0x0(0x18)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PlayerName;                                        // 0x18(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class FString                                LinkedPlayerIDString;                              // 0x28(0x10)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, GlobalConfig)
	class FString                                TribeName;                                         // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                PlatformProfileName;                               // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TeamID;                                            // 0x58(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LastKnownHealthCurrent;                            // 0x5C(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LastKnownHealthMax;                                // 0x60(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_520B[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ExplorerNoteLocationsPair
struct FExplorerNoteLocationsPair
{
public:
	int32                                        ExplorerNoteIndex;                                 // 0x0(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	uint8                                        Pad_520C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CheatString;                                       // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.DinoClassCountStruct
struct FDinoClassCountStruct
{
public:
	class UClass*                                DinoClass;                                         // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofTamedClass;                                // 0x8(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofTamedBabyClass;                            // 0xC(0x4)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofTamedFemalesClass;                         // 0x10(0x4)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofWildClass;                                 // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofWildBabyClass;                             // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumberofWildFemalesClass;                          // 0x1C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ShooterGame.Rotator_NetQuantize
struct FRotator_NetQuantize : public FRotator
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ShooterGame.Rotator_NetQuantizeNoRoll
struct FRotator_NetQuantizeNoRoll : public FRotator
{
public:
};

// 0x0 (0x18 - 0x18)
// ScriptStruct ShooterGame.Rotator_NetQuantizeYawOnly
struct FRotator_NetQuantizeYawOnly : public FRotator
{
public:
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.OverrideDamageHarvestingEntry
struct FOverrideDamageHarvestingEntry
{
public:
	TArray<class UClass*>                        ForHarvestingComponents;                           // 0x0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FDamageHarvestingEntry                HarvestEntryOverride;                              // 0x10(0x28)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FHarvestResourceEntry>         HarvestResourceEntriesOverride;                    // 0x38(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.TargetClassDamageScaler
struct FTargetClassDamageScaler
{
public:
	class UClass*                                TargetClass;                                       // 0x0(0x8)(Edit, BlueprintVisible, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DamageScale;                                       // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_520D[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.AssetPathObjectPair
struct FAssetPathObjectPair
{
public:
	struct FSoftObjectPath                       AssetPath;                                         // 0x0(0x20)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class UObject*                               AssetObject;                                       // 0x20(0x8)(BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.AudioComponentWrapper
struct FAudioComponentWrapper
{
public:
	class UAudioComponent*                       AudioComponent;                                    // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_520E[0x40];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.PlayerBanInfo
struct FPlayerBanInfo
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	uint32                                       Timeout;                                           // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig)
	uint8                                        Pad_520F[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.CachedTeamTameListStruct
struct FCachedTeamTameListStruct
{
public:
	int32                                        TargetingTeam;                                     // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_5210[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTrackedActorPlusInfoStruct>   CachedTeamTameList;                                // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AShooterPlayerController*              InitiatedPlayerRef;                                // 0x18(0x8)(Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.PlayersAwaitingUpdatedCachedTeamTameListStruct
struct FPlayersAwaitingUpdatedCachedTeamTameListStruct
{
public:
	TWeakObjectPtr<class AShooterPlayerController> PlayerController;                                  // 0x0(0x8)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig)
	bool                                         bIsStaleInfo;                                      // 0x8(0x1)(Edit, ConstParm, BlueprintVisible, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5211[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.MissionGlobalData
struct FMissionGlobalData
{
public:
	double                                       LastMissionDeactivatedUtcTime;                     // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ShooterGame.DinoSpawnWeightMultiplier
struct FDinoSpawnWeightMultiplier
{
public:
	class FName                                  DinoNameTag;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpawnWeightMultiplier;                             // 0x8(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         OverrideSpawnLimitPercentage;                      // 0xC(0x1)(Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5212[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SpawnLimitPercentage;                              // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.ConfigNPCSpawnEntriesContainer
struct FConfigNPCSpawnEntriesContainer
{
public:
	class FString                                NPCSpawnEntriesContainerClassString;               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNPCSpawnEntry>                NPCSpawnEntries;                                   // 0x10(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNPCSpawnLimit>                NPCSpawnLimits;                                    // 0x20(0x10)(BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.PlayerDeathReason
struct FPlayerDeathReason
{
public:
	int32                                        PlayerID;                                          // 0x0(0x4)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5213[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                DeathReason;                                       // 0x8(0x10)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       DiedAtTime;                                        // 0x18(0x8)(BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DeathLocation;                                     // 0x20(0x18)(ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.EngramEntryOverride
struct FEngramEntryOverride
{
public:
	class FString                                EngramClassName;                                   // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EngramIndex;                                       // 0x10(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         EngramHidden;                                      // 0x14(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5214[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        EngramPointsCost;                                  // 0x18(0x4)(BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EngramLevelRequirement;                            // 0x1C(0x4)(Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         RemoveEngramPreReq;                                // 0x20(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5215[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.EngramEntryAutoUnlock
struct FEngramEntryAutoUnlock
{
public:
	class FString                                EngramClassName;                                   // 0x0(0x10)(Edit, ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        LevelToAutoUnlock;                                 // 0x10(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5216[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ClassMultiplier
struct FClassMultiplier
{
public:
	class FString                                ClassName;                                         // 0x0(0x10)(ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        Multiplier;                                        // 0x10(0x4)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5217[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.TributePlayerTribeInfo
struct FTributePlayerTribeInfo
{
public:
	TArray<uint64>                               PlayerDataIDs;                                     // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint64>                               TribeIDs;                                          // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.AtlasAdminCommandTrackingEntry
struct FAtlasAdminCommandTrackingEntry
{
public:
	uint32                                       ServerUTCTime;                                     // 0x0(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5218[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	int64                                        PlayerID;                                          // 0x8(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SteamID;                                           // 0x10(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                IP;                                                // 0x20(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Location;                                          // 0x30(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	class FString                                CommandType;                                       // 0x48(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Command;                                           // 0x58(0x10)(Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DynamicUndermeshVolumes_Data
struct FDynamicUndermeshVolumes_Data
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, EditFixedSize, ReturnParm, Transient, Config)
	int32                                        R;                                                 // 0xC(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.DynamicUndermeshVolumes_MapSet
struct FDynamicUndermeshVolumes_MapSet
{
public:
	class FString                                Map;                                               // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor)
	TArray<struct FDynamicUndermeshVolumes_Data> Volumes;                                           // 0x10(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DynamicUndermeshVolumes_Root
struct FDynamicUndermeshVolumes_Root
{
public:
	TArray<struct FDynamicUndermeshVolumes_MapSet> Root;                                              // 0x0(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.ShooterGameSessionParams
struct FShooterGameSessionParams
{
public:
	class FName                                  SessionName;                                       // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  InitSessionName;                                   // 0x8(0x8)(BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsLAN;                                            // 0x10(0x1)(ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsPresence;                                       // 0x11(0x1)(Edit, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsPrivate;                                        // 0x12(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5219[0x6D];                                    // Fixing Size After Last Property  > TateDumper <
	class FString                                ServerPassword;                                    // 0x80(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ServerAdminPassword;                               // 0x90(0x10)(ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SpectatorPassword;                                 // 0xA0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.GameIniData
struct FGameIniData
{
public:
	class FString                                PropertyName;                                      // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
	class FString                                PropertyValue;                                     // 0x10(0x10)(Edit, Net, Parm, OutParm, ReturnParm, GlobalConfig)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.DinoDownloadData
struct FDinoDownloadData
{
public:
	uint32                                       AllowDownloadTimeUTC;                              // 0x0(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_521A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                UniqueDino;                                        // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.WorldBuffPersistantData
struct FWorldBuffPersistantData
{
public:
	class FName                                  WorldBuffIdentifier;                               // 0x0(0x8)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StackCount;                                        // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_521B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       WorldBuffStartTime;                                // 0x10(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.DepthOfFieldSetting
struct FDepthOfFieldSetting
{
public:
	float                                        FocalDistance;                                     // 0x0(0x4)(Edit, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FocalRegion;                                       // 0x4(0x4)(ConstParm, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NearTransitionRegion;                              // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FarTransitionRegion;                               // 0xC(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Scale;                                             // 0x10(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	float                                        MaxBokehSize;                                      // 0x14(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Occlusion;                                         // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         UseGaussianBlur;                                   // 0x1C(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_521C[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ActiveEventMainMenuOverride
struct FActiveEventMainMenuOverride
{
public:
	class FName                                  ActiveEvent;                                       // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            MainMenuBG;                                        // 0x8(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                MusicFilename;                                     // 0x10(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ShooterForceFeedback
struct FShooterForceFeedback
{
public:
	class UForceFeedbackEffect*                  FFE;                                               // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Priority;                                          // 0x8(0x4)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         PlayWhenPaused;                                    // 0xC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EHapticEffectType                 Type;                                              // 0xD(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_521D[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.HUDRichTextOverlayData
struct FHUDRichTextOverlayData
{
public:
	class FString                                DisplayText;                                       // 0x0(0x10)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          DefaultTextColor;                                  // 0x10(0x10)(Edit, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnoreDefaultTextColor : 1;                       // Mask: 0x1, PropSize: 0x10x20(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_416 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_521E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             Position;                                          // 0x28(0x10)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	enum class ETextJustify                      TextAlignment;                                     // 0x38(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalScreenAnchor;                            // 0x39(0x1)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalScreenAnchor;                              // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EHorizontalAlignment              HorizontalWidgetAlignment;                         // 0x3B(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EVerticalAlignment                VerticalWidgetAlignment;                           // 0x3C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5220[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        Scale;                                             // 0x40(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint8                                        bUseAutoWrap : 1;                                  // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_417 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5222[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             AutoSizeOverride;                                  // 0x48(0x10)(ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AActor*                                Instigator;                                        // 0x58(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5223[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.HUDNotification
struct FHUDNotification
{
public:
	class FString                                NotificationString;                                // 0x0(0x10)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UMaterialInterface*                    NotificationMaterial;                              // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            NotificationTexture;                               // 0x18(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RemainingDisplayTime;                              // 0x20(0x4)(Edit, ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                NotificationColor;                                 // 0x24(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NotificationScale;                                 // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LastYPos;                                          // 0x2C(0x4)(ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       StartedTime;                                       // 0x30(0x8)(Edit, ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MessageTypeID;                                     // 0x38(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ItemMsgType;                                       // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ItemClass;                                         // 0x40(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ItemName;                                          // 0x48(0x10)(Edit, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	int32                                        ItemQuantity;                                      // 0x58(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	float                                        ItemQuantityFloat;                                 // 0x5C(0x4)(ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.HintReplacementKeysForKeyboardControls
struct FHintReplacementKeysForKeyboardControls
{
public:
	class FString                                KeyboardControl;                                   // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        ReplacementGamepadControls;                        // 0x10(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.PrimalTriggerEffect
struct FPrimalTriggerEffect
{
public:
	enum class ETriggerEffectType                Type;                                              // 0x0(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_5224[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Position;                                          // 0x4(0x4)(Edit, ConstParm, ExportObject, ReturnParm, Transient, Config)
	int32                                        Strength;                                          // 0x8(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	int32                                        EndPosition;                                       // 0xC(0x4)(BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EndStrength;                                       // 0x10(0x4)(Edit, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Frequency;                                         // 0x14(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.DinoMapMarkerInfo
struct FDinoMapMarkerInfo
{
public:
	class APrimalDinoCharacter*                  Dino;                                              // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, Config, GlobalConfig)
	class UStaticMeshComponent*                  MarkerComponent;                                   // 0x8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DinoLocation;                                      // 0x10(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PreviousLatitudeNumber;                            // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PreviousLongitudeNumber;                           // 0x2C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                MarkerColor;                                       // 0x30(0x4)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5225[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x138 (0x138 - 0x0)
// ScriptStruct ShooterGame.NonClusterCharacterUploadData
struct FNonClusterCharacterUploadData
{
public:
	struct FArkTributePlayerData                 PlayerData;                                        // 0x0(0x120)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint64                                       TribeID;                                           // 0x120(0x8)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	TArray<struct FItemNetInfo>                  Items;                                             // 0x128(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.PrimalStats
struct FPrimalStats
{
public:
	bool                                         bUsed;                                             // 0x0(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5226[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       StartStatsTime;                                    // 0x8(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PrimalStatsValues[0x7];                            // 0x10(0x1C)(Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5227[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.PingData
struct FPingData
{
public:
	uint8                                        PingID;                                            // 0x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5228[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PingedLocation;                                    // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimitiveComponent*                   PingedComponent;                                   // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            PingIcon;                                          // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        CreatedByPlayerID;                                 // 0x30(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5229[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     CreatedByPlayerChar;                               // 0x38(0x8)(Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AShooterCharacter*>             RespondedPlayerChars;                              // 0x40(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       PingCreationTime;                                  // 0x50(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHasBeenViewed : 1;                                // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsDying : 1;                                      // Mask: 0x2, PropSize: 0x10x58(0x1)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsDead : 1;                                       // Mask: 0x4, PropSize: 0x10x58(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_522A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.ReplicatePingData
struct FReplicatePingData
{
public:
	uint8                                        Rep_PingID;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_522B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               Rep_PingedLocation;                                // 0x8(0x18)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UPrimitiveComponent*                   Rep_PingedComponent;                               // 0x20(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       Rep_PingedByPlayerID;                              // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_522C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     Rep_PingedByPlayerChar;                            // 0x30(0x8)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.StructuresOnFloor
struct FStructuresOnFloor
{
public:
	class APrimalStructure*                      FloorStructure;                                    // 0x0(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class APrimalStructure*>              StructuresOnFloor;                                 // 0x8(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.StructHighlightInfo
struct FStructHighlightInfo
{
public:
	TWeakObjectPtr<class APrimalStructure>       Structure;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
	struct FLinearColor                          HighlightColor;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.AdminPlayerDataInfo
struct FAdminPlayerDataInfo
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class FString                                PlayerSteamName;                                   // 0x10(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SteamID;                                           // 0x20(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int64                                        LinkedPlayerID;                                    // 0x30(0x8)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         IsHost;                                            // 0x38(0x1)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_522D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.AlivePlayerDataInfo
struct FAlivePlayerDataInfo
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class FString                                PlayerSteamName;                                   // 0x10(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint64                                       PlayerID;                                          // 0x20(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                TribeName;                                         // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	uint64                                       TargetingTeamID;                                   // 0x38(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.AliveNameAndLocation
struct FAliveNameAndLocation
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class FString                                TribeName;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	uint32                                       TargetingTeam;                                     // 0x20(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        Pad_522E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	uint64                                       PlayerID;                                          // 0x28(0x8)(Edit, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Location;                                          // 0x30(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x2A0 (0x2A0 - 0x0)
// ScriptStruct ShooterGame.ServerOptions
struct FServerOptions
{
public:
	class FString                                MaxStructuresInRange;                              // 0x0(0x10)(BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DifficultyOffset;                                  // 0x10(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                GlobalVoiceChat;                                   // 0x20(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ProximityChat;                                     // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                NoTributeDownloads;                                // 0x40(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                AllowThirdPersonPlayer;                            // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                AlwaysNotifyPlayerLeft;                            // 0x60(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DontAlwaysNotifyPlayerJoined;                      // 0x70(0x10)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ServerHardcore;                                    // 0x80(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ServerPVE;                                         // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ServerCrosshair;                                   // 0xA0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ServerForceNoHUD;                                  // 0xB0(0x10)(ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ShowMapPlayerLocation;                             // 0xC0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ServerPassword;                                    // 0xD0(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ServerAdminPassword;                               // 0xE0(0x10)(ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SpectatorPassword;                                 // 0xF0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DayCycleSpeedScale;                                // 0x100(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                DayTimeSpeedScale;                                 // 0x110(0x10)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                NightTimeSpeedScale;                               // 0x120(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                DinoDamageMultiplier;                              // 0x130(0x10)(Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                PlayerDamageMultiplier;                            // 0x140(0x10)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                StructureDamageMultiplier;                         // 0x150(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                PlayerResistanceMultiplier;                        // 0x160(0x10)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                DinoResistanceMultiplier;                          // 0x170(0x10)(ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                StructureResistanceMultiplier;                     // 0x180(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                XPMultiplier;                                      // 0x190(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                TamingSpeedMultiplier;                             // 0x1A0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                HarvestAmountMultiplier;                           // 0x1B0(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                PlayerCharacterWaterDrainMultiplier;               // 0x1C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                PlayerCharacterFoodDrainMultiplier;                // 0x1D0(0x10)(ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                DinoCharacterFoodDrainMultiplier;                  // 0x1E0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                PlayerCharacterStaminaDrainMultiplier;             // 0x1F0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                DinoCharacterStaminaDrainMultiplier;               // 0x200(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                PlayerCharacterHealthRecoveryMultiplier;           // 0x210(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                DinoCharacterHealthRecoveryMultiplier;             // 0x220(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                DinoCountMultiplier;                               // 0x230(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                HarvestHealthMultiplier;                           // 0x240(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                PvEStructureDecayPeriodMultiplier;                 // 0x250(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                ResourcesRespawnPeriodMultiplier;                  // 0x260(0x10)(Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
	class FString                                EnablePvPGamma;                                    // 0x270(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DisableStructureDecayPvE;                          // 0x280(0x10)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                AllowFlyerCarryPvE;                                // 0x290(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.SpawnPointInfo
struct FSpawnPointInfo
{
public:
	int32                                        SpawnPointID;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_522F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                BedName;                                           // 0x8(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class ABiomeZoneVolume*                      SpawnPointVolume;                                  // 0x18(0x8)(Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                SpawnPointActorClass;                              // 0x20(0x8)(ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               AtLocation;                                        // 0x28(0x18)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       NextAllowedUseTime;                                // 0x40(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bAllowedUse;                                       // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5230[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.ProjectileWeaponData
struct FProjectileWeaponData
{
public:
	float                                        ProjectileLife;                                    // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ExplosionDamage;                                   // 0x4(0x4)(BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ExplosionImpulse;                                  // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DirectDamage;                                      // 0xC(0x4)(Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DirectImpulse;                                     // 0x10(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ExplosionRadius;                                   // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                DamageType;                                        // 0x18(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
	class UClass*                                DirectDamageType;                                  // 0x20(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.DataSet
struct FDataSet
{
public:
	class FName                                  DataSetName;                                       // 0x0(0x8)(ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          ListNames;                                         // 0x8(0x10)(Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        ListStrings;                                       // 0x18(0x10)(Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                ListInts;                                          // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                ListFloats;                                        // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class UObject*>                       ListObjects;                                       // 0x48(0x10)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AActor*>                        ListActors;                                        // 0x58(0x10)(Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5231[0x10];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ClassNameReplacement
struct FClassNameReplacement
{
public:
	class FString                                FromClassName;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ToClassName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.ActionReportItem
struct FActionReportItem
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	class FString                                TribeName;                                         // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	class FString                                TimeOfDeath;                                       // 0x20(0x10)(ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                LevelOfDeath;                                      // 0x30(0x10)(Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DeathMessage;                                      // 0x40(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.ARKTributeData
struct FARKTributeData
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	enum class EPrimalARKTributeDataType         DataType;                                          // 0x10(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5232[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint8>                                DataBytes;                                         // 0x18(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DataClassName;                                     // 0x28(0x10)(Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DataTagName;                                       // 0x38(0x10)(ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Name;                                              // 0x48(0x10)(ConstParm, Net, OutParm)
	TArray<class FString>                        DataStats;                                         // 0x58(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastReceiveDataTime;                               // 0x68(0x8)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       DataID1;                                           // 0x70(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       DataID2;                                           // 0x74(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.TamingDinoInfo
struct FTamingDinoInfo
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	float                                        TameAffinityPercent;                               // 0x10(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HealthPercent;                                     // 0x14(0x4)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HealthCurrent;                                     // 0x18(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HealthMax;                                         // 0x1C(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HungerPercent;                                     // 0x20(0x4)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HungerCurrent;                                     // 0x24(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HungerMax;                                         // 0x28(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TorpidityPercent;                                  // 0x2C(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TameEffectivenessPercent;                          // 0x30(0x4)(Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        TameEffectivenessLvlModifier;                      // 0x34(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Location;                                          // 0x38(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	bool                                         bIsConcious;                                       // 0x50(0x1)(ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseGender;                                        // 0x51(0x1)(BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsFemale;                                         // 0x52(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance)
	bool                                         bIsTamed;                                          // 0x53(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       DataID1;                                           // 0x54(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       DataID2;                                           // 0x58(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsFavorited;                                      // 0x5C(0x1)(BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5233[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                DinoEntry;                                         // 0x60(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.TooltipTextInfo
struct FTooltipTextInfo
{
public:
	class FString                                Text;                                              // 0x0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	struct FColor                                Color;                                             // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	bool                                         bOnMinimalUI;                                      // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5234[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.StatValuePair
struct FStatValuePair
{
public:
	enum class EPrimalCharacterStatusValue       Stat;                                              // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5235[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Value;                                             // 0x4(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.WeightedObjectList
struct FWeightedObjectList
{
public:
	TArray<float>                                Weights;                                           // 0x0(0x10)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
	TArray<class UObject*>                       AssociatedObjects;                                 // 0x10(0x10)(Edit, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.DamagePrimalCharacterStatusValueModifier
struct FDamagePrimalCharacterStatusValueModifier
{
public:
	enum class EPrimalCharacterStatusValue       ValueType;                                         // 0x0(0x1)(Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5236[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bSpeedToAddInSeconds : 1;                          // Mask: 0x1, PropSize: 0x10x4(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bContinueOnUnchangedValue : 1;                     // Mask: 0x2, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIgnorePawnDamageAdjusters : 1;                    // Mask: 0x4, PropSize: 0x10x4(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bResetExistingModifierDescriptionIndex : 1;        // Mask: 0x8, PropSize: 0x10x4(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSetValue : 1;                                     // Mask: 0x10, PropSize: 0x10x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bSetAdditionalValue : 1;                           // Mask: 0x20, PropSize: 0x10x4(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_418 : 2;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5237[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LimitExistingModifierDescriptionToMaxAmount;       // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        UseAbsoluteDamageAmount;                           // 0xC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DamageMultiplierAmountToAdd;                       // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpeedToAdd;                                        // 0x14(0x4)(ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        StatusValueModifierDescriptionIndex;               // 0x18(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUsePercentualDamage : 1;                          // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bMakeUntameable : 1;                               // Mask: 0x2, PropSize: 0x10x1C(0x1)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_419 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5238[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PercentualDamage;                                  // 0x20(0x4)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5239[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                ScaleValueByCharacterDamageType;                   // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bForceImmediateTick;                               // 0x30(0x1)(ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_523A[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.ServerChatMessage
struct FServerChatMessage
{
public:
	uint8                                        Pad_523B[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                MessageText;                                       // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
	struct FLinearColor                          MessageColor;                                      // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsBold;                                           // 0x28(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_523C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DisplayScale;                                      // 0x2C(0x4)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DisplayTime;                                       // 0x30(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_523D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            MessageIcon;                                       // 0x38(0x8)(Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            SoundToPlay;                                       // 0x40(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	int32                                        MessageTypeID;                                     // 0x48(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_523E[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.RangedValues
struct FRangedValues
{
public:
	int32                                        Range;                                             // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Value;                                             // 0x4(0x4)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct ShooterGame.PrimalChatMessage
struct FPrimalChatMessage
{
public:
	class FString                                SenderName;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SenderSteamName;                                   // 0x10(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SenderTribeName;                                   // 0x20(0x10)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       SenderId;                                          // 0x30(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_523F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Message;                                           // 0x38(0x10)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
	class FString                                Receiver;                                          // 0x48(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        SenderTeamIndex;                                   // 0x58(0x4)(BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5240[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ReceivedTime;                                      // 0x60(0x8)(Edit, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EChatSendMode                     SendMode;                                          // 0x68(0x1)(BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5241[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint32                                       RadioFrequency;                                    // 0x6C(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EChatType                         ChatType;                                          // 0x70(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5242[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            SenderIcon;                                        // 0x78(0x8)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        SenderPlatform;                                    // 0x80(0x1)(Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5243[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                UserId;                                            // 0x88(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	uint8                                        SenderIsAdmin : 1;                                 // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5244[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x100 (0x100 - 0x0)
// ScriptStruct ShooterGame.PrimalImageStyle
struct FPrimalImageStyle
{
public:
	class FName                                  StyleName;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5245[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FInlineTextImageStyle                 ImageStyle;                                        // 0x10(0xF0)(Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x350 (0x350 - 0x0)
// ScriptStruct ShooterGame.PrimalTextStyle
struct FPrimalTextStyle
{
public:
	class FName                                  StyleName;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5246[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTextBlockStyle                       TextStyle;                                         // 0x10(0x340)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.BoneDamageAdjuster
struct FBoneDamageAdjuster
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
	float                                        DamageMultiplier;                                  // 0x8(0x4)(ConstParm, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.PaintItem
struct FPaintItem
{
public:
	class UPrimalInventoryComponent*             InventoryComp;                                     // 0x0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FItemNetID                            ItemID;                                            // 0x8(0x8)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance)
	uint8                                        ColorCode;                                         // 0x10(0x1)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5247[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        X;                                                 // 0x14(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	float                                        Y;                                                 // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	uint8                                        Pad_5248[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ItemMultiplier
struct FItemMultiplier
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ItemMultiplier;                                    // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance)
	uint8                                        Pad_5249[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.SaveLoadDyePaintingItem
struct FSaveLoadDyePaintingItem
{
public:
	struct FItemNetID                            ItemID;                                            // 0x0(0x8)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance)
	class FString                                ColorName;                                         // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FColor                                DyeColor;                                          // 0x18(0x4)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MissingPercentage;                                 // 0x1C(0x4)(BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NeededPercentage;                                  // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int16                                        ArchIndex;                                         // 0x24(0x2)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_524A[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<int32>                                ColorPixels;                                       // 0x28(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.FishSnareData
struct FFishSnareData
{
public:
	TWeakObjectPtr<class APrimalDinoCharacter>   DinoCharacter;                                     // 0x0(0x8)(ConstParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SnareTime;                                         // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.GamePadKeyName
struct FGamePadKeyName
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FString                                Name;                                              // 0x18(0x10)(ConstParm, Net, OutParm)
	class UTexture2D*                            KeyIcon;                                           // 0x28(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.BlueprintVisualLogEntry
struct FBlueprintVisualLogEntry
{
public:
	class FString                                Category;                                          // 0x0(0x10)(ExportObject, Parm, OutParm, Transient)
	class FString                                Key;                                               // 0x10(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class FString                                Value;                                             // 0x20(0x10)(ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.AvailableMission
struct FAvailableMission
{
public:
	class UClass*                                MissionClass;                                      // 0x0(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_524B[0x18];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.MissionMetaData
struct FMissionMetaData
{
public:
	class FName                                  MissionTag;                                        // 0x0(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                MissionMetaDataClass;                              // 0x8(0x8)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.MissionAlertEntry
struct FMissionAlertEntry
{
public:
	class UTexture2D*                            Icon;                                              // 0x0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	int32                                        Count;                                             // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	uint8                                        Pad_524C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Label;                                             // 0x10(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                ItemType;                                          // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowCount : 1;                                    // Mask: 0x1, PropSize: 0x10x28(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_524D[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.LootTableEntry
struct FLootTableEntry
{
public:
	enum class ELootItemType                     LootItemType;                                      // 0x0(0x1)(Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_524E[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class UClass*>                        LootItemClasses;                                   // 0x8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Weight;                                            // 0x18(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst)
	enum class ESimpleCurve                      QuantityCurve;                                     // 0x1C(0x1)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_524F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        MinQuantity;                                       // 0x20(0x4)(ConstParm, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxQuantity;                                       // 0x24(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESimpleCurve                      QualityCurve;                                      // 0x28(0x1)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5250[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             QualityRange;                                      // 0x30(0x10)(ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.TekGrenadeLauncherSlot
struct FTekGrenadeLauncherSlot
{
public:
	class UClass*                                AmmoType;                                          // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       LastFireTime;                                      // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsLoaded;                                         // 0x10(0x1)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5251[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1B0 (0x1B0 - 0x0)
// ScriptStruct ShooterGame.HUDElement
struct FHUDElement
{
public:
	enum class EHUDElementType                   Type;                                              // 0x0(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_5252[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        bIsVisible : 1;                                    // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsEditorOnly : 1;                                 // Mask: 0x2, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	uint8                                        bRespectPlayerUIScaleSetting : 1;                  // Mask: 0x4, PropSize: 0x10x4(0x1)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bTitleIsExtendedInfo : 1;                          // Mask: 0x8, PropSize: 0x10x4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bLabelIsExtendedInfo : 1;                          // Mask: 0x10, PropSize: 0x10x4(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_41A : 3;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5253[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Title;                                             // 0x8(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, EditConst, SubobjectReference)
	enum class ETextJustify                      TextAlignment_Title;                               // 0x18(0x1)(Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5254[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Label;                                             // 0x20(0x10)(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ETextJustify                      TextAlignment_Label;                               // 0x30(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EHUDElementHorizontalAlignment    TextContainerHorizontalAlignment;                  // 0x31(0x1)(Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EHUDElementVerticalAlignment      TextContainerVerticalAlignment;                    // 0x32(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5255[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        ZOrder;                                            // 0x34(0x4)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	float                                        Progress;                                          // 0x38(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          TextColor;                                         // 0x3C(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	float                                        TextScale;                                         // 0x4C(0x4)(Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMargin                               TextPadding;                                       // 0x50(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, GlobalConfig, SubobjectReference)
	struct FLinearColor                          BackgroundImageColor;                              // 0x60(0x10)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ProgressColor;                                     // 0x70(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EProgressBarFillType              ProgressBarFillType;                               // 0x80(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EHUDElementAnchorMode             AnchorMode;                                        // 0x81(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5256[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FAnchors                              Anchor;                                            // 0x88(0x20)(Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             Location;                                          // 0xA8(0x10)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint8                                        bOverrideLocationForUIScaling : 1;                 // Mask: 0x1, PropSize: 0x10xB8(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_41B : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5257[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LocationAtMinScale;                                // 0xC0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             LocationAtDefaultScale;                            // 0xD0(0x10)(Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             LocationAtMaxScale;                                // 0xE0(0x10)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             Size;                                              // 0xF0(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
	struct FVector2D                             Scale;                                             // 0x100(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	class UTexture2D*                            BackgroundImage;                                   // 0x110(0x8)(Edit, ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	class UTexture2D*                            ProgressBarFillImage;                              // 0x118(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMargin                               ProgressBarPadding;                                // 0x120(0x10)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             ProgressBarScale;                                  // 0x130(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            Icon;                                              // 0x140(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FVector2D                             IconSize;                                          // 0x148(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             IconScale;                                         // 0x158(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          IconColor;                                         // 0x168(0x10)(Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMargin                               IconPadding;                                       // 0x178(0x10)(Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        IconRotation;                                      // 0x188(0x4)(ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMargin                               ProgressBarFillImageMargin;                        // 0x18C(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FMargin                               ProgressBarBackgroundImageMargin;                  // 0x19C(0x10)(Edit, ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseGamepadIcon : 1;                               // Mask: 0x1, PropSize: 0x10x1AC(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5258[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.LeaderboardDisplayRow
struct FLeaderboardDisplayRow
{
public:
	class UTexture2D*                            RowIcon;                                           // 0x0(0x8)(ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        Columns;                                           // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5259[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.MekBackpackData
struct FMekBackpackData
{
public:
	class FName                                  BackpackType;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<bool>                                 BoolData;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                FloatData;                                         // 0x18(0x10)(Edit, ConstParm, ExportObject, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<double>                               TimeData;                                          // 0x28(0x10)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector>                       VectorData;                                        // 0x38(0x10)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FString>                        StringData;                                        // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.HitMarkerSettings
struct FHitMarkerSettings
{
public:
	uint8                                        bIsVisible : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPlayHitSound : 1;                                 // Mask: 0x2, PropSize: 0x10x0(0x1)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_41C : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_525A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          Color;                                             // 0x4(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	float                                        DrawDuration;                                      // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             Scale;                                             // 0x18(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	class USoundBase*                            HitSound;                                          // 0x28(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1E0 (0x1E0 - 0x0)
// ScriptStruct ShooterGame.PointOfInterestData
struct FPointOfInterestData
{
public:
	uint8                                        PointType;                                         // 0x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_525B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class FName                                  PointTag;                                          // 0x4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_525C[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PointTitle;                                        // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PointDescription;                                  // 0x20(0x10)(ConstParm, BlueprintVisible, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               PointLocation;                                     // 0x30(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              PointRotation;                                     // 0x48(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AActor*                                PointActor;                                        // 0x60(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PointVisibleDistance;                              // 0x68(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PointVisibleDotProductRange;                       // 0x6C(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTexture2D*                            PointIcon;                                         // 0x70(0x8)(BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UParticleSystem*                       ViewedPointVFX;                                    // 0x78(0x8)(ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundCue*                             ViewedPointSFX;                                    // 0x80(0x8)(EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                PointCosmeticActorClass;                           // 0x88(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FTransform                            PointCosmeticActorOffsetTransform;                 // 0x90(0x60)(Edit, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bHidePointOfInterestTitleBar : 1;                  // Mask: 0x1, PropSize: 0x10xF0(0x1)(ConstParm, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPointTagValidated : 1;                            // Mask: 0x2, PropSize: 0x10xF0(0x1)(ExportObject, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPointTagRequiresValidation : 1;                   // Mask: 0x4, PropSize: 0x10xF0(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyVisibleOffScreen : 1;                         // Mask: 0x8, PropSize: 0x10xF0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyVisibleOnScreen : 1;                          // Mask: 0x10, PropSize: 0x10xF0(0x1)(Edit, ExportObject, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bAlwaysVisible : 1;                                // Mask: 0x20, PropSize: 0x10xF0(0x1)(Edit, Parm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_41D : 2;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_525D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class USoundBase*                            LocationAddedSound;                                // 0xF8(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USoundBase*                            LocationReachedSound;                              // 0x100(0x8)(BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               WidgetLocationOffset;                              // 0x108(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WidgetHiddenDistance;                              // 0x120(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          IndicatorColor;                                    // 0x124(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          IconColor;                                         // 0x134(0x10)(Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUsePulseAnimation : 1;                            // Mask: 0x1, PropSize: 0x10x144(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowProgress : 1;                                 // Mask: 0x2, PropSize: 0x10x144(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_41E : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_525E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ProgressValue;                                     // 0x148(0x4)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_525F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                ProgressLabelText;                                 // 0x150(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ProgressBarColor;                                  // 0x160(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          ProgressLabelColor;                                // 0x170(0x10)(Edit, ExportObject, Net, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowProgressLabelWhenOffScreen : 1;               // Mask: 0x1, PropSize: 0x10x180(0x1)(ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOnlyVisibleOnMap : 1;                             // Mask: 0x2, PropSize: 0x10x180(0x1)(BlueprintVisible, EditFixedSize, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_41F : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5260[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CharacterID;                                       // 0x184(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        CharacterIsPlayer : 1;                             // Mask: 0x1, PropSize: 0x10x188(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_420 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5261[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        AlphaMultiplier;                                   // 0x18C(0x4)(ConstParm, ExportObject, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ScaleMultiplier;                                   // 0x190(0x4)(Edit, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bShowSecondaryProgress : 1;                        // Mask: 0x1, PropSize: 0x10x194(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_421 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5262[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SecondaryProgressValue;                            // 0x198(0x4)(Edit, ExportObject, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SecondaryProgressBarColor;                         // 0x19C(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bCanDismissPOI : 1;                                // Mask: 0x1, PropSize: 0x10x1AC(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_422 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5263[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        UseDismissIndex;                                   // 0x1B0(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5264[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                DismissActorAction;                                // 0x1B8(0x8)(Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DistanceString;                                    // 0x1C0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bPreventTextClose : 1;                             // Mask: 0x1, PropSize: 0x10x1D0(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5265[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x300 (0x300 - 0x0)
// ScriptStruct ShooterGame.PointOfInterestCompanionBehavior
struct FPointOfInterestCompanionBehavior
{
public:
	float                                        CompanionFocusRange;                               // 0x0(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CompanionOrbitWithinRange;                         // 0x4(0x4)(ConstParm, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CompanionOrbitRadius;                              // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5266[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               OrbitOriginOffset;                                 // 0x10(0x18)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CompanionReachedOrbitWithinDistOverride;           // 0x28(0x4)(ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        InterpToOrbitSpeedOverride;                        // 0x2C(0x4)(ConstParm, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        InterpAroundOrbitSpeedOverride;                    // 0x30(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5267[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCompanionReactionData                CompanionReaction_WithinRange;                     // 0x38(0xB0)(ConstParm, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCompanionReactionData                CompanionReaction_StartOrbit;                      // 0xE8(0xB0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCompanionReactionData                CompanionReaction_ReachedOrbit;                    // 0x198(0xB0)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FCompanionReactionData                CompanionReaction_PointViewed;                     // 0x248(0xB0)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceCompanionFocus : 1;                          // Mask: 0x1, PropSize: 0x10x2F8(0x1)(BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOrbitingCompanionLooksAtPoint : 1;                // Mask: 0x2, PropSize: 0x10x2F8(0x1)(EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bForceCompanionLookAtPointActor : 1;               // Mask: 0x4, PropSize: 0x10x2F8(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bRandomlyOrbitAroundAndScan : 1;                   // Mask: 0x8, PropSize: 0x10x2F8(0x1)(Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5268[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x4E0 (0x4E0 - 0x0)
// ScriptStruct ShooterGame.PointOfInterestData_ForCompanion
struct FPointOfInterestData_ForCompanion
{
public:
	struct FPointOfInterestData                  PointData;                                         // 0x0(0x1E0)(Edit, ConstParm, BlueprintVisible, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPointOfInterestCompanionBehavior     PointCompanionBehavior;                            // 0x1E0(0x300)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.MissionWaypointInfo
struct FMissionWaypointInfo
{
public:
	bool                                         bWaypointActive;                                   // 0x0(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5269[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WaypointDestination;                               // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                WaypointTitle;                                     // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  WaypointID;                                        // 0x30(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct ShooterGame.TamingWaypointInfo
struct FTamingWaypointInfo
{
public:
	bool                                         bWaypointActive;                                   // 0x0(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_526A[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WaypointDestination;                               // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                WaypointTitle;                                     // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        WaypointID;                                        // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_526B[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Icon;                                              // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FTamingDinoInfo                       DinoInfo;                                          // 0x40(0x68)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ProgressBarPercent;                                // 0xA8(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsTamed;                                          // 0xAC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_526C[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x148 (0x148 - 0x0)
// ScriptStruct ShooterGame.TrackedActorWaypointInfo
struct FTrackedActorWaypointInfo
{
public:
	bool                                         bWaypointActive;                                   // 0x0(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_526D[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WaypointDestination;                               // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                WaypointTitle;                                     // 0x20(0x10)(Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        WaypointID;                                        // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_526E[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            Icon;                                              // 0x38(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst)
	struct FCustomTrackedActorInfo               DinoInfo;                                          // 0x40(0xE0)(Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ProgressBarPercent;                                // 0x120(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsTamed;                                          // 0x124(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_526F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       TamedAtTime;                                       // 0x128(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	struct FVector                               LastPOILocation;                                   // 0x130(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.TeleportDestination
struct FTeleportDestination
{
public:
	class FString                                DestinationTitle;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DestinationLocation;                               // 0x10(0x18)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              DestinationRotation;                               // 0x28(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.MinimapMark
struct FMinimapMark
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ConstParm, Net, OutParm)
	class FName                                  CustomTag;                                         // 0x10(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	struct FVector                               Location;                                          // 0x18(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FLinearColor                          Color;                                             // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
	int32                                        ID;                                                // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
	uint8                                        Pad_5270[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            MarkIcon;                                          // 0x48(0x8)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  MapName;                                           // 0x50(0x8)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsShowing : 1;                                    // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_423 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5271[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          IconColor;                                         // 0x5C(0x10)(Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsShowingText : 1;                                // Mask: 0x1, PropSize: 0x10x6C(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_424 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5272[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        CharacterID;                                       // 0x70(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        CharacterIsPlayer : 1;                             // Mask: 0x1, PropSize: 0x10x74(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5273[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x120 (0x120 - 0x0)
// ScriptStruct ShooterGame.MassTeleportData
struct FMassTeleportData
{
public:
	struct FTeleportDestination                  MyTeleportDestination;                             // 0x0(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       MyTeleportStartTime;                               // 0x40(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MyTeleportDuration;                                // 0x48(0x4)(Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MyTeleportRadius;                                  // 0x4C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AActor*                                InitiatedByActor;                                  // 0x50(0x8)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5274[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            InitiatedAtTransform;                              // 0x60(0x60)(Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                BuffToApply;                                       // 0xC0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class AActor*>                        MyTeleportingActors;                               // 0xC8(0x10)(Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bTeleportSnapsToGround : 1;                        // Mask: 0x1, PropSize: 0x10xD8(0x1)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_425 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5275[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FTransform>                    MyTeleportingActorTransformOffsets;                // 0xE0(0x10)(Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                MyTeleportingDelays;                               // 0xF0(0x10)(ExportObject, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<int32>                                MyTeleportationAttemptMap;                         // 0x100(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bMaintainRotation : 1;                             // Mask: 0x1, PropSize: 0x10x110(0x1)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5276[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.CrateTemporaryQualityModifiers
struct FCrateTemporaryQualityModifiers
{
public:
	class FName                                  CustomTag;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	class FString                                ClassString;                                       // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        QualityMultiplierModifier;                         // 0x18(0x4)(Edit, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5277[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.CrateTemporaryQualityModifierSet
struct FCrateTemporaryQualityModifierSet
{
public:
	class FName                                  SetTag;                                            // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst)
	TArray<struct FCrateTemporaryQualityModifiers> Modifiers;                                         // 0x8(0x10)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ResourceTemporaryAmountModifiers
struct FResourceTemporaryAmountModifiers
{
public:
	class FName                                  CustomTag;                                         // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
	class FString                                HarvestComponentClassString;                       // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ResourceAmountMultiplierModifier;                  // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5278[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.ResourceTemporaryAmountModifierSet
struct FResourceTemporaryAmountModifierSet
{
public:
	class FName                                  SetTag;                                            // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, EditConst)
	TArray<struct FResourceTemporaryAmountModifiers> Modifiers;                                         // 0x8(0x10)(BlueprintVisible, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.UserCosmeticInfo
struct FUserCosmeticInfo
{
public:
	class FString                                TribeFlagFile;                                     // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.DinoAbilityInfo
struct FDinoAbilityInfo
{
public:
	class FName                                  InputAction;                                       // 0x0(0x8)(BlueprintVisible, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	class FString                                AbilityName;                                       // 0x8(0x10)(ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                AbilityDescription;                                // 0x18(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.DinoAbilities
struct FDinoAbilities
{
public:
	class FName                                  DinoTag;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FDinoAbilityInfo>              AbilityInfos;                                      // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.SOTFScorePlayerData
struct FSOTFScorePlayerData
{
public:
	int32                                        LinkedID;                                          // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5279[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                PlayerName;                                        // 0x8(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
	int32                                        PlayersKilled;                                     // 0x18(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DinosKilled;                                       // 0x1C(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       DeathTime;                                         // 0x20(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                KilledBy;                                          // 0x28(0x10)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                DeathDamageCauserClass;                            // 0x38(0x8)(Edit, Net, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        KillerTeam;                                        // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_527A[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.SOTFScoreTribeData
struct FSOTFScoreTribeData
{
public:
	int32                                        TargetingTeam;                                     // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance)
	int32                                        PlayersKilledByDinos;                              // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DinosKilledByDinos;                                // 0x8(0x4)(BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xC (0xC - 0x0)
// ScriptStruct ShooterGame.PrimalCameraInterpParams
struct FPrimalCameraInterpParams
{
public:
	float                                        SpringStiffness;                                   // 0x0(0x4)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CriticalDamping;                                   // 0x4(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TargetVelocity;                                    // 0x8(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraPitchBasedModifier
struct FPrimalCameraPitchBasedModifier
{
public:
	struct FVector2D                             ApplyBetweenPitchValues;                           // 0x0(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bLerpValue : 1;                                    // Mask: 0x1, PropSize: 0x10x10(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_426 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_527B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LerpBetweenPitchValues;                            // 0x18(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ExponentialLerpBase;                               // 0x28(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EAxis                             InterpParamsAxis;                                  // 0x2C(0x1)(ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_527C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             FinalInterpParams;                                 // 0x30(0xC)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideArmLengthStartingLerpValue : 1;           // Mask: 0x1, PropSize: 0x10x3C(0x1)(Edit, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_427 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_527D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ArmLengthStartingLerpValue;                        // 0x40(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FinalArmLength;                                    // 0x44(0x4)(Edit, ConstParm, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideArmLengthInterpParams : 1;                // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, ConstParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_428 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_527E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             FinalArmLengthInterpParams;                        // 0x4C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverridePivotLocationOffset : 1;                  // Mask: 0x1, PropSize: 0x10x58(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverridePivotLocationOffsetStartingLerpValue : 1; // Mask: 0x2, PropSize: 0x10x58(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_429 : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_527F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PivotLocationOffsetStartingLerpValue;              // 0x60(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               FinalPivotOffset;                                  // 0x78(0x18)(ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraInterpScreenAreaModifier
struct FPrimalCameraInterpScreenAreaModifier
{
public:
	uint8                                        bApplyOnXAxis : 1;                                 // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bApplyOnYAxis : 1;                                 // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_42A : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5280[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ScreenCoords;                                      // 0x8(0x10)(BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bLerpValue : 1;                                    // Mask: 0x1, PropSize: 0x10x18(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_42B : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5281[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ScreenCoordsForLerping;                            // 0x20(0x10)(BlueprintVisible, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverrideStartingParamsForLerping : 1;             // Mask: 0x1, PropSize: 0x10x30(0x1)(ConstParm, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_42C : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5282[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             StartingInterpParamsForLerping;                    // 0x34(0xC)(ConstParm, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ExponentialLerpBase;                               // 0x40(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             NewInterpParams;                                   // 0x44(0xC)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraParamsOverride
struct FPrimalCameraParamsOverride
{
public:
	class FName                                  CameraPivotBoneName;                               // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverridePivotLocationOffsetSettings : 1;          // Mask: 0x1, PropSize: 0x10x8(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUsePivotLocationOffset : 1;                       // Mask: 0x2, PropSize: 0x10x8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_42D : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5283[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PivotLocationOffset;                               // 0x10(0x18)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsX;                  // 0x28(0xC)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsY;                  // 0x34(0xC)(Edit, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsZ;                  // 0x40(0xC)(BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             CameraPivotRotationInterpParams;                   // 0x4C(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CameraArmLength;                                   // 0x58(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             CameraArmLengthInterpParams;                       // 0x5C(0xC)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     RemoveOriginalPitchModifiersInPitchRange;          // 0x68(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0x78(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraParams
struct FPrimalCameraParams
{
public:
	class FName                                  CameraPivotBoneName;                               // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUsePivotLocationOffset : 1;                       // Mask: 0x1, PropSize: 0x10x8(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDinoUseOldSystemCameraLocation : 1;               // Mask: 0x2, PropSize: 0x10x8(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_42E : 6;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5284[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               PivotLocationOffset;                               // 0x10(0x18)(Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsX;                  // 0x28(0xC)(ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsY;                  // 0x34(0xC)(Edit, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             CameraPivotLocationInterpParamsZ;                  // 0x40(0xC)(BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5285[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsXModifiers;                            // 0x50(0x10)(Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsYModifiers;                            // 0x60(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraInterpScreenAreaModifier> InterpParamsZModifiers;                            // 0x70(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        PositivePitchZDistOff;                             // 0x80(0x4)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             CameraPivotRotationInterpParams;                   // 0x84(0xC)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bLerpRotationInterpParamsBasedOnRotationSpeed : 1; // Mask: 0x1, PropSize: 0x10x90(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_42F : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5286[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             MaxCameraPivotRotationInterpParams;                // 0x94(0xC)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        YawDeltaToStartLerping;                            // 0xA0(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        YawDeltaToEndLerping;                              // 0xA4(0x4)(ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CameraArmLength;                                   // 0xA8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraInterpParams             CameraArmLengthInterpParams;                       // 0xAC(0xC)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraPitchBasedModifier> PitchBasedModifiers;                               // 0xB8(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             AnimAimOffsetPitchRange;                           // 0xC8(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraSettingsConditions
struct FPrimalCameraSettingsConditions
{
public:
	enum class ECameraSetting_BoolCondition      RequireMoving;                                     // 0x0(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECameraSetting_BoolCondition      RequireSprinting;                                  // 0x1(0x1)(ExportObject, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraSettings
struct FPrimalCameraSettings
{
public:
	class FName                                  Description;                                       // 0x0(0x8)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	struct FPrimalCameraSettingsConditions       Conditions;                                        // 0x8(0x2)(Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5287[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraParams                   CameraParams;                                      // 0x10(0xD8)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraSettingsOverride
struct FPrimalCameraSettingsOverride
{
public:
	class FName                                  Description;                                       // 0x0(0x8)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	struct FPrimalCameraSettingsConditions       Conditions;                                        // 0x8(0x2)(Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5288[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraParamsOverride           CameraParamsOverride;                              // 0x10(0x88)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraSettingsOverrideGroup
struct FPrimalCameraSettingsOverrideGroup
{
public:
	TArray<struct FPrimalCameraSettingsOverride> SettingsOverrides;                                 // 0x0(0x10)(Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraPivotZInterpOverrides
struct FPrimalCameraPivotZInterpOverrides
{
public:
	uint8                                        bOverridePivotZInterpForCrouching : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_430 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5289[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             CrouchPivotZInterpParams;                          // 0x4(0xC)(Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverridePivotZInterpForProne : 1;                 // Mask: 0x1, PropSize: 0x10x10(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_431 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_528A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             PronePivotZInterpParams;                           // 0x14(0xC)(BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bOverridePivotZInterpForLongFalls : 1;             // Mask: 0x1, PropSize: 0x10x20(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_432 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_528B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPrimalCameraInterpParams             LongFallPivotZInterpParams;                        // 0x24(0xC)(BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        InterpSpeedToReachLongFallZInterpParams;           // 0x30(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ShooterGame.CameraInterpMovementBasedMultipliers
struct FCameraInterpMovementBasedMultipliers
{
public:
	uint8                                        bUseSpringStiffnessSpeedMultipliers : 1;           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bApplySpringStiffnessSpeedMultipliersToZ : 1;      // Mask: 0x2, PropSize: 0x10x0(0x1)(BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bUseSpeedMultipliersForBackwardsMovement : 1;      // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_433 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_528C[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        BackwardsMovementReferenceSpeedForSpringStiffnessMultiplier; // 0x4(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WalkingReferenceSpeedForSpringStiffnessMultiplier; // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        RunningReferenceSpeedForSpringStiffnessMultiplier; // 0xC(0x4)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BaseBackwardsMovementSpeedMultiplierExponent;      // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BaseWalkingSpeedMultiplierExponent;                // 0x14(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BaseRunningSpeedMultiplierExponent;                // 0x18(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinAllowedBaseBackwardsMovementSpeedMultiplier;    // 0x1C(0x4)(Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinAllowedBaseWalkingSpeedMultiplier;              // 0x20(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MinAllowedBaseRunningSpeedMultiplier;              // 0x24(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxAllowedBaseBackwardsMovementSpeedMultiplier;    // 0x28(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxAllowedBaseWalkingSpeedMultiplier;              // 0x2C(0x4)(OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxAllowedBaseRunningSpeedMultiplier;              // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_528D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ExtraBackwardsMovementSpringStiffnessMultiplier;   // 0x38(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               ExtraWalkingSpringStiffnessMultiplier;             // 0x50(0x18)(EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               ExtraRunningSpringStiffnessMultiplier;             // 0x68(0x18)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x1C0 (0x1C0 - 0x0)
// ScriptStruct ShooterGame.PrimalCameraProfile
struct FPrimalCameraProfile
{
public:
	uint8                                        bUseCameraRotationToDetermineInterpAxes : 1;       // Mask: 0x1, PropSize: 0x10x0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_434 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_528E[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        SnapPivotToFinalLocationAfterDistance;             // 0x4(0x4)(ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FlyingSnapPivotToFinalLocationAfterDistance;       // 0x8(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_528F[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FCameraInterpMovementBasedMultipliers CameraPivotInterpMultipliers;                      // 0x10(0x80)(ConstParm, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraSettings                 DefaultPrimalCameraSettings;                       // 0x90(0xE8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FPrimalCameraSettings>         AdditionalPrimalCameraSettings;                    // 0x178(0x10)(Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalCameraPivotZInterpOverrides    CameraPivotZInterpOverrides;                       // 0x188(0x34)(BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5290[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.HibernationEntity
struct FHibernationEntity
{
public:
	uint8                                        Pad_5291[0x58];                                    // Fixing Size Of Struct > TateDumper <
};

// 0x130 (0x130 - 0x0)
// ScriptStruct ShooterGame.StructureVariant
struct FStructureVariant
{
public:
	class FString                                VariantName;                                       // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  VariantTag;                                        // 0x10(0x8)(Edit, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseBPAllowSwitchToVariant;                        // 0x18(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5292[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class UStaticMesh>            Mesh;                                              // 0x20(0x30)(ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseMeshTransform;                                 // 0x50(0x1)(Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5293[0xF];                                     // Fixing Size After Last Property  > TateDumper <
	struct FTransform                            MeshTransform;                                     // 0x60(0x60)(ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UGeometryCollection>    DestroyedMeshOverride;                             // 0xC0(0x30)(Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FDestructionGeoCollectionInfo> DestroyedMeshesOverride;                           // 0xF0(0x10)(ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftObjectPtr<class UTexture2D>             VariantIcon;                                       // 0x100(0x30)(Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.StructureVariantAdditionEntry
struct FStructureVariantAdditionEntry
{
public:
	class FName                                  ForStructureTierTag;                               // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FStructureVariant>             Variants;                                          // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.StructureVariantAddition
struct FStructureVariantAddition
{
public:
	class FName                                  ForStructureTag;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FStructureVariantAdditionEntry> VariantEntries;                                    // 0x8(0x10)(ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.StructureToBuildAddition
struct FStructureToBuildAddition
{
public:
	TSoftClassPtr<class UPrimalItem>             ForStructureItem;                                  // 0x0(0x30)(ConstParm, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<TSoftClassPtr<class APrimalStructure>> AdditionalStructures;                              // 0x30(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.CDOModification_SinglePropertyBase
struct FCDOModification_SinglePropertyBase
{
public:
	TSoftClassPtr<class UObject>                 TheClass;                                          // 0x0(0x30)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x30(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
	bool                                         bAlsoApplyToChildrenClasses;                       // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDontApplyToChildClassIfVarIsEdited;               // 0x39(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5294[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x48 - 0x40)
// ScriptStruct ShooterGame.BoolPropertyPair
struct FBoolPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	bool                                         BoolPropertyValue;                                 // 0x40(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5295[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x48 - 0x40)
// ScriptStruct ShooterGame.FloatPropertyPair
struct FFloatPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	float                                        FloatPropertyValue;                                // 0x40(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5296[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x8 (0x48 - 0x40)
// ScriptStruct ShooterGame.DoublePropertyPair
struct FDoublePropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	double                                       DoublePropertyValue;                               // 0x40(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x50 - 0x40)
// ScriptStruct ShooterGame.StringPropertyPair
struct FStringPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	class FString                                StringPropertyValue;                               // 0x40(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x48 - 0x40)
// ScriptStruct ShooterGame.IntPropertyPair
struct FIntPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	int32                                        IntPropertyValue;                                  // 0x40(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5297[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x58 - 0x40)
// ScriptStruct ShooterGame.VectorPropertyPair
struct FVectorPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	struct FVector                               VectorPropertyValue;                               // 0x40(0x18)(Edit, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x58 - 0x40)
// ScriptStruct ShooterGame.RotatorPropertyPair
struct FRotatorPropertyPair : public FCDOModification_SinglePropertyBase
{
public:
	struct FRotator                              RotatorPropertyValue;                              // 0x40(0x18)(BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.CDOModification_ArrayBase
struct FCDOModification_ArrayBase
{
public:
	TSoftClassPtr<class UObject>                 TheClass;                                          // 0x0(0x30)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  PropertyName;                                      // 0x30(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, EditConst, SubobjectReference)
	bool                                         bAlsoApplyToChildrenClasses;                       // 0x38(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDontApplyToChildClassIfVarIsEdited;               // 0x39(0x1)(Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ECDOArrayModificationType         ArrayOperation;                                    // 0x3A(0x1)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_5298[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<uint32>                               IndexesToModify;                                   // 0x40(0x10)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint32>                               IndexesToRemove;                                   // 0x50(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_BoolArray
struct FCDOModification_BoolArray : public FCDOModification_ArrayBase
{
public:
	TArray<bool>                                 Values;                                            // 0x60(0x10)(ConstParm, BlueprintReadOnly, Transient, Config)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_IntArray
struct FCDOModification_IntArray : public FCDOModification_ArrayBase
{
public:
	TArray<int32>                                Values;                                            // 0x60(0x10)(ConstParm, BlueprintReadOnly, Transient, Config)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_FloatArray
struct FCDOModification_FloatArray : public FCDOModification_ArrayBase
{
public:
	TArray<float>                                Values;                                            // 0x60(0x10)(ConstParm, BlueprintReadOnly, Transient, Config)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_DoubleArray
struct FCDOModification_DoubleArray : public FCDOModification_ArrayBase
{
public:
	TArray<double>                               Values;                                            // 0x60(0x10)(ConstParm, BlueprintReadOnly, Transient, Config)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_StringArray
struct FCDOModification_StringArray : public FCDOModification_ArrayBase
{
public:
	TArray<class FString>                        Values;                                            // 0x60(0x10)(ConstParm, BlueprintReadOnly, Transient, Config)
};

// 0x10 (0x70 - 0x60)
// ScriptStruct ShooterGame.CDOModification_VectorArray
struct FCDOModification_VectorArray : public FCDOModification_ArrayBase
{
public:
	TArray<struct FVector>                       Values;                                            // 0x60(0x10)(ConstParm, BlueprintReadOnly, Transient, Config)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.CDOClassDebug
struct FCDOClassDebug
{
public:
	class FName                                  Description;                                       // 0x0(0x8)(BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig)
	TSoftClassPtr<class UObject>                 TheClass;                                          // 0x8(0x30)(Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDontDebugShooterCharacters : 1;                   // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_435 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_5299[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          PropertyNames;                                     // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.CDODebugData
struct FCDODebugData
{
public:
	float                                        RadiusToSearchForActors;                           // 0x0(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_529A[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCDOClassDebug>                TheDebugData;                                      // 0x8(0x10)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ShooterGame.NetChangeDefaultPropertyValue
struct FNetChangeDefaultPropertyValue
{
public:
	TArray<struct FBoolPropertyPair>             BoolProperties;                                    // 0x0(0x10)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCDOModification_BoolArray>    BoolArrayProperties;                               // 0x10(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FIntPropertyPair>              IntProperties;                                     // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCDOModification_IntArray>     IntArrayProperties;                                // 0x30(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FFloatPropertyPair>            FloatProperties;                                   // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCDOModification_FloatArray>   FloatArrayProperties;                              // 0x50(0x10)(Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FDoublePropertyPair>           DoubleProperties;                                  // 0x60(0x10)(Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCDOModification_DoubleArray>  DoubleArrayProperties;                             // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FStringPropertyPair>           StringProperties;                                  // 0x80(0x10)(Edit, ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCDOModification_StringArray>  StringArrayProperties;                             // 0x90(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVectorPropertyPair>           VectorProperties;                                  // 0xA0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCDOModification_VectorArray>  VectorArrayProperties;                             // 0xB0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FRotatorPropertyPair>          RotatorProperties;                                 // 0xC0(0x10)(Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.TrackedActorUpdatedArrayInfoStruct
struct FTrackedActorUpdatedArrayInfoStruct
{
public:
	int32                                        MapKey;                                            // 0x0(0x4)(Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
	bool                                         bIsPlayer;                                         // 0x4(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_529B[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ShooterGame.TrackedActorOverallContainer
struct FTrackedActorOverallContainer
{
public:
	TMap<int32, struct FTrackedActorPlusInfoStruct> TrackedActorEntriesAsPerCategory;                  // 0x0(0x50)(ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.NativeDinoHologramEntry
struct FNativeDinoHologramEntry
{
public:
	class USkeletalMesh*                         DinoMesh;                                          // 0x0(0x8)(ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimSequence*                         Anims;                                             // 0x8(0x8)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Scales;                                            // 0x10(0x4)(Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        ZOffset;                                           // 0x14(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct ShooterGame.GlobalMaterialParamOverrides
struct FGlobalMaterialParamOverrides
{
public:
	TMap<class FName, TSoftObjectPtr<class UTexture>> Textures;                                          // 0x0(0x50)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, float>                     Scalars;                                           // 0x50(0x50)(Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TMap<class FName, struct FLinearColor>       Vectors;                                           // 0xA0(0x50)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x2C (0x2C - 0x0)
// ScriptStruct ShooterGame.WeaponData
struct FWeaponData
{
public:
	bool                                         bInfiniteAmmo;                                     // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bNeverReload;                                      // 0x1(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUsesAmmo;                                         // 0x2(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDontTakeAmmoOnReload;                             // 0x3(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bFullReloadFromSingleItem;                         // 0x4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bShowAmmoInClipAsPercent;                          // 0x5(0x1)(ConstParm, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDontReloadEmptyClipOnEquip;                       // 0x6(0x1)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_529C[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        AmmoPerClip;                                       // 0x8(0x4)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        AmmoPerShot;                                       // 0xC(0x4)(Edit, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bSilentOverflowReload;                             // 0x10(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_529D[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        TimeBetweenShots;                                  // 0x14(0x4)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        NoAnimReloadDuration;                              // 0x18(0x4)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bForceReloadDuration;                              // 0x1C(0x1)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLoopedReloadAnim;                                 // 0x1D(0x1)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_529E[0x2];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ReloadDurationPerAmmoCount;                        // 0x20(0x4)(ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        ItemDurabilityToConsumePerShot;                    // 0x24(0x4)(ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HarvestResourceMultiplier;                         // 0x28(0x4)(BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.InstantWeaponData
struct FInstantWeaponData
{
public:
	float                                        WeaponSpread;                                      // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TargetingSpreadMod;                                // 0x4(0x4)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FinalWeaponSpreadMultiplier;                       // 0x8(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FiringSpreadIncrement;                             // 0xC(0x4)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FiringSpreadMax;                                   // 0x10(0x4)(Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WeaponRange;                                       // 0x14(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        HitDamage;                                         // 0x18(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DamageImpulse;                                     // 0x1C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                DamageType;                                        // 0x20(0x8)(ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
	float                                        ClientSideHitLeeway;                               // 0x28(0x4)(Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        AllowedViewDotHitDir;                              // 0x2C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.WeaponAnim
struct FWeaponAnim
{
public:
	class UAnimMontage*                          Pawn1P;                                            // 0x0(0x8)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UAnimMontage*                          Pawn3P;                                            // 0x8(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x400 (0x400 - 0x0)
// ScriptStruct ShooterGame.ClimbingAnims
struct FClimbingAnims
{
public:
	struct FWeaponAnim                           LeftHandAnchored[0x20];                            // 0x0(0x200)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FWeaponAnim                           RightHandAnchored[0x20];                           // 0x200(0x200)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.SkyBoxLoadedStatus
struct FSkyBoxLoadedStatus
{
public:
	uint8                                        Pad_529F[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UTexture2D*                            LoadedTextureResources[0x3];                       // 0x8(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct ShooterGame.SOTFNotificationInfo
struct FSOTFNotificationInfo
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
	uint8                                        Pad_52A0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        PlayerNames;                                       // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PlayerDeathReason;                                 // 0x18(0x10)(ConstParm, ExportObject, Net, OutParm, Transient, Config)
	class FString                                TribeName;                                         // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance)
	int32                                        TeamID;                                            // 0x38(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52A1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                CustomDrawString;                                  // 0x40(0x10)(Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       StartDisplayTime;                                  // 0x50(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DisplayInterval;                                   // 0x58(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52A2[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DisplayData;                                       // 0x60(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bLastPlayer;                                       // 0x70(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class ESTOFNotificationType             Type;                                              // 0x71(0x1)(Edit, BlueprintReadOnly, Net, Parm, Transient, Config)
	uint8                                        Pad_52A3[0x6];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.BannerTextInfo
struct FBannerTextInfo
{
public:
	class UTextRenderComponent*                  TextComponent;                                     // 0x0(0x8)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UStaticMeshComponent*                  BackgroundComponent;                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bActive;                                           // 0x10(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52A4[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ScrollingTextInfo
struct FScrollingTextInfo
{
public:
	class UTextRenderComponent*                  TextComponent;                                     // 0x0(0x8)(Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Time;                                              // 0x8(0x4)(Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         bActive;                                           // 0xC(0x1)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52A5[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.PlayerPreviewImage
struct FPlayerPreviewImage
{
public:
	uint8                                        Pad_52A6[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	class UStaticMeshComponent*                  PreviewMesh;                                       // 0x18(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
	class UTextRenderComponent*                  PlayerNameText;                                    // 0x20(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextRenderComponent*                  TribeComponent;                                    // 0x28(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UTextRenderComponent*                  DeathInfo;                                         // 0x30(0x8)(ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ShooterGame.VehicleEngineDatum
struct FVehicleEngineDatum
{
public:
	float                                        FadeInRPMStart;                                    // 0x0(0x4)(Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FadeInRPMEnd;                                      // 0x4(0x4)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FadeOutRPMStart;                                   // 0x8(0x4)(BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        FadeOutRPMEnd;                                     // 0xC(0x4)(ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxPitchMultiplier;                                // 0x10(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ShooterGame.SupplyCrateSpawnEntry
struct FSupplyCrateSpawnEntry
{
public:
	float                                        EntryWeight;                                       // 0x0(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52A7[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftClassPtr<class APrimalStructureItemContainer_SupplyCrate> CrateTemplate;                                     // 0x8(0x30)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class UNPCSpawnEntriesContainer> CrateEnemySpawnEntries;                            // 0x38(0x30)(ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.SupplyCrateSpawnPointEntry
struct FSupplyCrateSpawnPointEntry
{
public:
	class AActor*                                LinkedSpawnPoint;                                  // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class ANPCZoneManager*                       LinkedEnemySpawnZoneManager;                       // 0x8(0x8)(ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  LinkedEnemySpawnZoneManagerTag;                    // 0x10(0x8)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bTraceGroundPoint : 1;                             // Mask: 0x1, PropSize: 0x10x18(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_436 : 7;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_52A8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               TraceGroundPointDownOffset;                        // 0x20(0x18)(Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               TraceGroundPointUpOffset;                          // 0x38(0x18)(Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SpawnPointWeight;                                  // 0x50(0x4)(ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52A9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FSupplyCrateSpawnEntry>        OverrideSupplyCrateEntries;                        // 0x58(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52AA[0x8];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x48 (0x48 - 0x0)
// ScriptStruct ShooterGame.TrackItemInfo
struct FTrackItemInfo
{
public:
	class UClass*                                ItemClass;                                         // 0x0(0x8)(Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<uint16>                               CraftingRequirements;                              // 0x8(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FCraftingResourceRequirement>  BaseCraftingRequirement;                           // 0x18(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ItemName;                                          // 0x28(0x10)(Edit, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FLinearColor                          ItemColor;                                         // 0x38(0x10)(Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ShooterGame.TriggerEffectLibraryEntry
struct FTriggerEffectLibraryEntry
{
public:
	TSoftClassPtr<class AShooterWeapon>          WeaponClass;                                       // 0x0(0x30)(Edit, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalTriggerEffect                  HasAmmoEffect;                                     // 0x30(0x18)(Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FPrimalTriggerEffect                  EmptyEffect;                                       // 0x48(0x18)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.ActorWidgetPair
struct FActorWidgetPair
{
public:
	int32                                        Key;                                               // 0x0(0x4)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	uint8                                        Pad_52AB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UTrackedDinoListEntryWidget*           Widget;                                            // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.CheatMenuCheatItem
struct FCheatMenuCheatItem
{
public:
	TSoftClassPtr<class UPrimalItem>             Item;                                              // 0x0(0x30)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Config)
	int32                                        Quantity;                                          // 0x30(0x4)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Quality;                                           // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Blueprint;                                         // 0x38(0x1)(ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
	uint8                                        Pad_52AC[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.CheatMenuCharacterPresetItems
struct FCheatMenuCharacterPresetItems
{
public:
	TArray<struct FCheatMenuCheatItem>           CharacterItems;                                    // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ShooterGame.ModPreviewData
struct FModPreviewData
{
public:
	class UTexture2DDynamic*                     PreviewImage;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Transient, Config, GlobalConfig)
	class FString                                PreviewDescription;                                // 0x8(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MinMajorVersion;                                   // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisableInSingleplayer : 1;                        // Mask: 0x1, PropSize: 0x10x1C(0x1)(ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bDisableNonDedi : 1;                               // Mask: 0x2, PropSize: 0x10x1C(0x1)(Edit, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52AD[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.MapDescription
struct FMapDescription
{
public:
	class UTexture2D*                            MapImage;                                          // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FText                                  MapDescription;                                    // 0x8(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        MinAscensionLevelRequired;                         // 0x20(0x4)(Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52AE[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.DifficultyValues
struct FDifficultyValues
{
public:
	class FName                                  DataListValueName;                                 // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<class FName>                          ValuesPerDifficulty;                               // 0x8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.UI_MainMenuLink
struct FUI_MainMenuLink
{
public:
	class FString                                MapName;                                           // 0x0(0x10)(Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UClass*                                Class;                                             // 0x10(0x8)(ConstParm, BlueprintVisible, ExportObject, ZeroConstructor)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct ShooterGame.CarouselEntryData
struct FCarouselEntryData
{
public:
	class FString                                ImagePath;                                         // 0x0(0x10)(Edit, ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                EntryWidgetTemplate;                               // 0x10(0x10)(Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PipWidgetTemplate;                                 // 0x20(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                EntryData;                                         // 0x30(0x10)(BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PipData;                                           // 0x40(0x10)(Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                OnClickedAction;                                   // 0x50(0x10)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                OnFocusAction;                                     // 0x60(0x10)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                ShowForPlatforms;                                  // 0x70(0x10)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.NewOptionsItem
struct FNewOptionsItem
{
public:
	class FString                                DisplayString;                                     // 0x0(0x10)(BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       LocKey;                                            // 0x10(0x4)(BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  SettingName;                                       // 0x14(0x8)(Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  buttonFunction;                                    // 0x1C(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Negate;                                            // 0x24(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         DisabledForNow;                                    // 0x25(0x1)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52AF[0x2];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.OptionsSet
struct FOptionsSet
{
public:
	class FString                                TabName;                                           // 0x0(0x10)(Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint32                                       TabLocKey;                                         // 0x10(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         MPOnly;                                            // 0x14(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52B0[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FNewOptionsItem>               OptionsItems;                                      // 0x18(0x10)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.NamePair
struct FNamePair
{
public:
	class FName                                  FNameA;                                            // 0x0(0x8)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FName                                  FNameB;                                            // 0x8(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.CameraLocationSetting
struct FCameraLocationSetting
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	struct FVector                               LocationOffset;                                    // 0x8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Zoom;                                              // 0x20(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52B1[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              Rotation;                                          // 0x28(0x18)(BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ShooterGame.BoneModifierSlider
struct FBoneModifierSlider
{
public:
	class FName                                  SliderWidgetName;                                  // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FBoneModifierRange>            BoneModifierRanges;                                // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EBoneModifierType                 BoneModifierType;                                  // 0x18(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52B2[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DefaultValueMale;                                  // 0x1C(0x4)(Edit, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        DefaultValueFemale;                                // 0x20(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52B3[0xC];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xA68 (0xA68 - 0x0)
// ScriptStruct ShooterGame.CustomPreviewMeshInfo
struct FCustomPreviewMeshInfo
{
public:
	uint8                                        bIsEnabled : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
	uint8                                        bIsMaleMesh : 1;                                   // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsFemaleMesh : 1;                                 // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        BitPad_437 : 5;                                    // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_52B4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TSoftObjectPtr<class USkeletalMesh>          OverwrittenMesh;                                   // 0x8(0x30)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TSoftClassPtr<class UAnimInstance>           OverwrittenAnimbp;                                 // 0x38(0x30)(BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              OverwrittenMeshRotation;                           // 0x68(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FBoneModifierSlider>           OverwrittenBoneModifiersSliders;                   // 0x80(0x10)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneModifierRangeArray               OverwrittenCharacterBoneModifierRanges[0x1A];      // 0x90(0x4E0)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FBoneModifierRangeArray               OverwrittenExtraCharacterBoneModifierMax[0x1A];    // 0x570(0x4E0)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FNamePair>                     OverwrittenReplacedDynamicMaterialNames;           // 0xA50(0x10)(ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class USkeletalMeshComponent*                MeshCompRef;                                       // 0xA60(0x8)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ShooterGame.DynamicMaterialSlider
struct FDynamicMaterialSlider
{
public:
	class FName                                  SliderWidgetName;                                  // 0x0(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	enum class EPlayerDynamicMaterialType        PlayerDynamicMaterialSliderType;                   // 0x8(0x1)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52B5[0xF];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.SavedVoiceCollectionActualIndex
struct FSavedVoiceCollectionActualIndex
{
public:
	struct FPlayerConfigVoiceCollectionInfo      GameDataStruct;                                    // 0x0(0x20)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        ActualArrayIndex;                                  // 0x20(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsCustom : 1;                                     // Mask: 0x1, PropSize: 0x10x24(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52B6[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct ShooterGame.CharacterPreset
struct FCharacterPreset
{
public:
	struct FVector2D                             BodyColorSliderValue;                              // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             HairColorSliderValue;                              // 0x10(0x10)(BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             HairTipColorSliderValue;                           // 0x20(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             BeardTipColorSliderValue;                          // 0x30(0x10)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             BeardColorSliderValue;                             // 0x40(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             EyeColorSliderValue;                               // 0x50(0x10)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector2D                             EyeIrisColorSliderValue;                           // 0x60(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HairStyleSliderValue;                              // 0x70(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        HairLengthSliderValue;                             // 0x74(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BeardLengthSliderValue;                            // 0x78(0x4)(Edit, ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        BeardStyleSliderValue;                             // 0x7C(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        EyebrowStyleSliderValue;                           // 0x80(0x4)(ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52B9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<float>                                BoneModifierSliderValues;                          // 0x88(0x10)(ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        PlayerVoiceCollectionIndex;                        // 0x98(0x4)(ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        bIsPlayerVoiceCollectionCustom;                    // 0x9C(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FLinearColor                          SkinBodyColor;                                     // 0xA0(0x10)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<float>                                DynamicMaterialFloats;                             // 0xB0(0x10)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<struct FVector2D>                     DynamicMaterialColorPicker;                        // 0xC0(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsLastCharacterMade;                              // 0xD0(0x1)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bOverridesGender;                                  // 0xD1(0x1)(BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsFemale;                                         // 0xD2(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance)
	bool                                         bIsDefaultPreset;                                  // 0xD3(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bIsForChangingCharacter;                           // 0xD4(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52BA[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ShooterGame.JoyAnim
struct FJoyAnim
{
public:
	class UAnimMontage*                          Anim;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Chance;                                            // 0x8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52BB[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct ShooterGame.PenetrationTraceHit
struct FPenetrationTraceHit
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xF0)(BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	float                                        DistanceFromLastHit;                               // 0xF0(0x4)(Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        TotalDistance;                                     // 0xF4(0x4)(Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.OverlappedFoliageElement
struct FOverlappedFoliageElement
{
public:
	class AActor*                                HarvestActor;                                      // 0x0(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class UInstancedStaticMeshComponent*         InstancedStaticMeshComponent;                      // 0x8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig)
	class UPrimalHarvestingComponent*            HarvestingComponent;                               // 0x10(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               HarvestLocation;                                   // 0x18(0x18)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        HitBodyIndex;                                      // 0x30(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxHarvestHealth;                                  // 0x34(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        CurrentHarvestHealth;                              // 0x38(0x4)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsUnharvestable : 1;                              // Mask: 0x1, PropSize: 0x10x3C(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        bIsVisibleAndActive : 1;                           // Mask: 0x2, PropSize: 0x10x3C(0x1)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52BC[0x3];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x58 (0x58 - 0x0)
// ScriptStruct ShooterGame.ProjectileArc
struct FProjectileArc
{
public:
	struct FVector                               StartLocation;                                     // 0x0(0x18)(ExportObject, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               StartDirection;                                    // 0x18(0x18)(Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        LaunchSpeed;                                       // 0x30(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52BD[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              WorldRotation;                                     // 0x38(0x18)(ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bApplyRotationToGravityDirection;                  // 0x50(0x1)(Edit, ConstParm, BlueprintVisible, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52BE[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        OverrideGravityZ;                                  // 0x54(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.VolumetricDispatchDetailLevel
struct FVolumetricDispatchDetailLevel
{
public:
	int32                                        ListUpdateFrequency;                               // 0x0(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxFoliageDispatches;                              // 0x4(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxFluidDispatches;                                // 0x8(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxFoliageCharacterInteractions;                   // 0xC(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxFluidCharacterInteractions;                     // 0x10(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxNonVolumetricInteractions;                      // 0x14(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        MaxNonVolumetricInteractionDistance;               // 0x18(0x4)(BlueprintVisible, Net, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Pawn_WaterMaxDistance;                             // 0x1C(0x4)(ExportObject, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Pawn_WaterMinComplexScreenSize;                    // 0x20(0x4)(ExportObject, Parm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Pawn_FoliageMaxDistance;                           // 0x24(0x4)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Pawn_FoliageMinComplexScreenSize;                  // 0x28(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        Effects_MaxDistance;                               // 0x2C(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        OffscreenMultiplier;                               // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        IncludePriorityGreaterThan;                        // 0x34(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bTriggerFluidEvents;                               // 0x38(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52BF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        Bubbles_MaxDistance;                               // 0x3C(0x4)(BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ShooterGame.VolumetricDispatch
struct FVolumetricDispatch
{
public:
	struct FVector                               Velocity;                                          // 0x0(0x18)(Config, EditConst, GlobalConfig)
	struct FVector                               Location;                                          // 0x18(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
	struct FVector                               ExtraCapsuleLocation;                              // 0x30(0x18)(BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Scale;                                             // 0x48(0x18)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	float                                        Radius;                                            // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        RadiusOuter;                                       // 0x64(0x4)(Edit, ExportObject, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DirectionalRadial;                                 // 0x68(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        Plasticity;                                        // 0x80(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WaterBend;                                         // 0x84(0x4)(Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        InteractionStrength;                               // 0x88(0x4)(ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        NumEvaluatedBySolver;                              // 0x8C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        MaxAllowedFrameDelayBuffer;                        // 0x90(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        FramesDelayed;                                     // 0x94(0x4)(Edit, ConstParm, BlueprintVisible, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.ComponentVolumetricDispatch
struct FComponentVolumetricDispatch
{
public:
	TWeakObjectPtr<class UPrimalWindSourceComponent> InteractionComponent;                              // 0x0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ShooterGame.FoliageInteractionSettings
struct FFoliageInteractionSettings
{
public:
	float                                        Plasticity;                                        // 0x0(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        InteractionStrength;                               // 0x4(0x4)(ExportObject, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               DirectionalRadial;                                 // 0x8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDontAddIfOverLimits;                              // 0x20(0x1)(ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52C0[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ShooterGame.FluidInteractionSettings
struct FFluidInteractionSettings
{
public:
	bool                                         bSplash;                                           // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bRipple;                                           // 0x1(0x1)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52C1[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraSystem*                        FluidSimSplashTemplateOverride;                    // 0x8(0x8)(Edit, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         PlaySplashSound;                                   // 0x10(0x1)(Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52C2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               SplashLocation;                                    // 0x18(0x18)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        SplashRadius;                                      // 0x30(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52C3[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ShooterGame.VRBattleWaveUnit
struct FVRBattleWaveUnit
{
public:
	TSoftClassPtr<class APrimalDinoCharacter>    DinoType;                                          // 0x0(0x30)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DinoBlueprintPath;                                 // 0x30(0x10)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        DinoLevel;                                         // 0x40(0x4)(EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52C4[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               SpawnOffset;                                       // 0x48(0x18)(ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EPrimalCharacterStatusValue> PrioritizeStats;                                   // 0x60(0x10)(Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct ShooterGame.GridIndex
struct FGridIndex
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct ShooterGame.PrimalWorldModifierList
struct FPrimalWorldModifierList
{
public:
	bool                                         bUseActiveEvent;                                   // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52C5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FName>                          ActiveEventNames;                                  // 0x8(0x10)(ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bUseINIStringOptionValue;                          // 0x18(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52C6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<class FString>                        INIStringOptionValues;                             // 0x20(0x10)(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bHasOverridePriority;                              // 0x30(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_52C7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                WorldModifierClass;                                // 0x38(0x8)(Edit, ConstParm, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

}


