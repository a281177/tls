#ifndef TLSOURCE_H
#define TLSOURCE_H

using namespace HmiAl;

namespace AL2HMIBridge
{

class AL2HMIBRIDGE_EXPORT TLSource : public SerializedSource, public PropertySubscriber, public MessageEventSubscriber
{
    Q_OBJECT

    Q_PROPERTY(QString fuelMainListType READ fuelMainListType NOTIFY fuelMainListTypeChanged)
    Q_PROPERTY(QString fuelPriceInfoLastUpdatDate READ fuelPriceInfoLastUpdatDate NOTIFY fuelPriceInfoLastUpdatDateChanged)
    Q_PROPERTY(QString fuelPriceInfoPrice1 READ fuelPriceInfoPrice1 NOTIFY fuelPriceInfoPrice1Changed)
    Q_PROPERTY(QString fuelPriceInfoPrice2 READ fuelPriceInfoPrice2 NOTIFY fuelPriceInfoPrice2Changed)
    Q_PROPERTY(QString fuelPriceInfoPrice3 READ fuelPriceInfoPrice3 NOTIFY fuelPriceInfoPrice3Changed)
    Q_PROPERTY(QString fuelPriceInfoPrice4 READ fuelPriceInfoPrice4 NOTIFY fuelPriceInfoPrice4Changed)
    Q_PROPERTY(QString fuelPriceInfoTypeName1 READ fuelPriceInfoTypeName1 NOTIFY fuelPriceInfoTypeName1Changed)
    Q_PROPERTY(QString fuelPriceInfoTypeName2 READ fuelPriceInfoTypeName2 NOTIFY fuelPriceInfoTypeName2Changed)
    Q_PROPERTY(QString fuelPriceInfoTypeName3 READ fuelPriceInfoTypeName3 NOTIFY fuelPriceInfoTypeName3Changed)
    Q_PROPERTY(QString fuelPriceInfoTypeName4 READ fuelPriceInfoTypeName4 NOTIFY fuelPriceInfoTypeName4Changed)
    Q_PROPERTY(QString fuelStationInfoAddress1 READ fuelStationInfoAddress1 NOTIFY fuelStationInfoAddress1Changed)
    Q_PROPERTY(QString fuelStationInfoAddress2 READ fuelStationInfoAddress2 NOTIFY fuelStationInfoAddress2Changed)
    Q_PROPERTY(QString fuelStationInfoName READ fuelStationInfoName NOTIFY fuelStationInfoNameChanged)
    Q_PROPERTY(QString fuelStationInfoPhoneNum READ fuelStationInfoPhoneNum NOTIFY fuelStationInfoPhoneNumChanged)
    Q_PROPERTY(QString graphicalWeatherAlertPopEndtime READ graphicalWeatherAlertPopEndtime NOTIFY graphicalWeatherAlertPopEndtimeChanged)
    Q_PROPERTY(QString graphicalWeatherAlertPopStartTime READ graphicalWeatherAlertPopStartTime NOTIFY graphicalWeatherAlertPopStartTimeChanged)
    Q_PROPERTY(QString graphicalWeatherAlertPopType READ graphicalWeatherAlertPopType NOTIFY graphicalWeatherAlertPopTypeChanged)
    Q_PROPERTY(QString movieShowtimesMovieName READ movieShowtimesMovieName NOTIFY movieShowtimesMovieNameChanged)
    Q_PROPERTY(QString movieShowtimesShowtimes READ movieShowtimesShowtimes NOTIFY movieShowtimesShowtimesChanged)
    Q_PROPERTY(QString movieShowtimesTheatreDate READ movieShowtimesTheatreDate NOTIFY movieShowtimesTheatreDateChanged)
    Q_PROPERTY(QString movieShowtimesTheatreName READ movieShowtimesTheatreName NOTIFY movieShowtimesTheatreNameChanged)
    Q_PROPERTY(QString movieSynopsisActors READ movieSynopsisActors NOTIFY movieSynopsisActorsChanged)
    Q_PROPERTY(QString movieSynopsisMovieName READ movieSynopsisMovieName NOTIFY movieSynopsisMovieNameChanged)
    Q_PROPERTY(QString movieSynopsisRating READ movieSynopsisRating NOTIFY movieSynopsisRatingChanged)
    Q_PROPERTY(QString movieSynopsisSynopsis READ movieSynopsisSynopsis NOTIFY movieSynopsisSynopsisChanged)
    Q_PROPERTY(QString movieTheatreInfoAddress1 READ movieTheatreInfoAddress1 NOTIFY movieTheatreInfoAddress1Changed)
    Q_PROPERTY(QString movieTheatreInfoAddress2 READ movieTheatreInfoAddress2 NOTIFY movieTheatreInfoAddress2Changed)
    Q_PROPERTY(QString movieTheatreInfoName READ movieTheatreInfoName NOTIFY movieTheatreInfoNameChanged)
    Q_PROPERTY(QString movieTheatreInfoPhoneNum READ movieTheatreInfoPhoneNum NOTIFY movieTheatreInfoPhoneNumChanged)
    Q_PROPERTY(QString sportsDetailsDate READ sportsDetailsDate NOTIFY sportsDetailsDateChanged)
    Q_PROPERTY(QString sportsDetailsDivision READ sportsDetailsDivision NOTIFY sportsDetailsDivisionChanged)
    Q_PROPERTY(QString sportsDetailsLastDate READ sportsDetailsLastDate NOTIFY sportsDetailsLastDateChanged)
    Q_PROPERTY(QString sportsDetailsLastScore READ sportsDetailsLastScore NOTIFY sportsDetailsLastScoreChanged)
    Q_PROPERTY(QString sportsDetailsNextDate READ sportsDetailsNextDate NOTIFY sportsDetailsNextDateChanged)
    Q_PROPERTY(QString sportsDetailsNextTeam READ sportsDetailsNextTeam NOTIFY sportsDetailsNextTeamChanged)
    Q_PROPERTY(QString sportsDetailsNextTime READ sportsDetailsNextTime NOTIFY sportsDetailsNextTimeChanged)
    Q_PROPERTY(QString sportsDetailsTeamName READ sportsDetailsTeamName NOTIFY sportsDetailsTeamNameChanged)
    Q_PROPERTY(QString sportsEventInfoEventLoc READ sportsEventInfoEventLoc NOTIFY sportsEventInfoEventLocChanged)
    Q_PROPERTY(QString sportsEventInfoEventName READ sportsEventInfoEventName NOTIFY sportsEventInfoEventNameChanged)
    Q_PROPERTY(QString sportsEventResultsLeaderName READ sportsEventResultsLeaderName NOTIFY sportsEventResultsLeaderNameChanged)
    Q_PROPERTY(QString sportsEventResultsRoundInfo READ sportsEventResultsRoundInfo NOTIFY sportsEventResultsRoundInfoChanged)
    Q_PROPERTY(QString sportsEventResultsRoundType READ sportsEventResultsRoundType NOTIFY sportsEventResultsRoundTypeChanged)
    Q_PROPERTY(QString sportsLeagueName READ sportsLeagueName NOTIFY sportsLeagueNameChanged)
    Q_PROPERTY(QString sportsRaceDate READ sportsRaceDate NOTIFY sportsRaceDateChanged)
    Q_PROPERTY(QString sportsRaceName READ sportsRaceName NOTIFY sportsRaceNameChanged)
    Q_PROPERTY(QString sportsScoreListDate READ sportsScoreListDate NOTIFY sportsScoreListDateChanged)
    Q_PROPERTY(QString tunerSATGameAlertInfo READ tunerSATGameAlertInfo NOTIFY tunerSATGameAlertInfoChanged)
    Q_PROPERTY(QString tunerSATGameAlertTeam1Name READ tunerSATGameAlertTeam1Name NOTIFY tunerSATGameAlertTeam1NameChanged)
    Q_PROPERTY(QString tunerSATGameAlertTeam2Name READ tunerSATGameAlertTeam2Name NOTIFY tunerSATGameAlertTeam2NameChanged)
    Q_PROPERTY(QString tLFav5DayWeatherLocation READ tLFav5DayWeatherLocation NOTIFY tLFav5DayWeatherLocationChanged)
    Q_PROPERTY(QString tLFavCurrWeather READ tLFavCurrWeather NOTIFY tLFavCurrWeatherChanged)
    Q_PROPERTY(QString tLFavCurrWeatherLocation READ tLFavCurrWeatherLocation NOTIFY tLFavCurrWeatherLocationChanged)
    Q_PROPERTY(QString tLFavFuelName READ tLFavFuelName NOTIFY tLFavFuelNameChanged)
    Q_PROPERTY(QString tLFavFuelPrice READ tLFavFuelPrice NOTIFY tLFavFuelPriceChanged)
    Q_PROPERTY(QString tLFavFuelType READ tLFavFuelType NOTIFY tLFavFuelTypeChanged)
    Q_PROPERTY(QString tLFavMovieTheaterName READ tLFavMovieTheaterName NOTIFY tLFavMovieTheaterNameChanged)
    Q_PROPERTY(QString travelLinkBackseatSubscription READ travelLinkBackseatSubscription NOTIFY travelLinkBackseatSubscriptionChanged)
    Q_PROPERTY(QString travelLinkBackseatID READ travelLinkBackseatID NOTIFY travelLinkBackseatIDChanged)
    Q_PROPERTY(QString travelLinkPhoneNum READ travelLinkPhoneNum NOTIFY travelLinkPhoneNumChanged)
    Q_PROPERTY(QString travelLinkRTTrafficSubscription READ travelLinkRTTrafficSubscription NOTIFY travelLinkRTTrafficSubscriptionChanged)
    Q_PROPERTY(QString travelLinkSatRadioSubscription READ travelLinkSatRadioSubscription NOTIFY travelLinkSatRadioSubscriptionChanged)
    Q_PROPERTY(QString travelLinkSiriusID READ travelLinkSiriusID NOTIFY travelLinkSiriusIDChanged)
    Q_PROPERTY(QString travelLinkSiriusSubscription READ travelLinkSiriusSubscription NOTIFY travelLinkSiriusSubscriptionChanged)
    Q_PROPERTY(QString weatherCurrentForecast READ weatherCurrentForecast NOTIFY weatherCurrentForecastChanged)
    Q_PROPERTY(QString weatherCurrentLocation READ weatherCurrentLocation NOTIFY weatherCurrentLocationChanged)
    Q_PROPERTY(QString weatherDateTime READ weatherDateTime NOTIFY weatherDateTimeChanged)
    Q_PROPERTY(QString weatherSkiCondLiftsOpen READ weatherSkiCondLiftsOpen NOTIFY weatherSkiCondLiftsOpenChanged)
    Q_PROPERTY(QString weatherSkiCondNewSnow READ weatherSkiCondNewSnow NOTIFY weatherSkiCondNewSnowChanged)
    Q_PROPERTY(QString weatherSkiCondNightSki READ weatherSkiCondNightSki NOTIFY weatherSkiCondNightSkiChanged)
    Q_PROPERTY(QString weatherSkiCondOpStatus READ weatherSkiCondOpStatus NOTIFY weatherSkiCondOpStatusChanged)
    Q_PROPERTY(QString weatherSkiCondSnowCond READ weatherSkiCondSnowCond NOTIFY weatherSkiCondSnowCondChanged)
    Q_PROPERTY(QString weatherSkiCondSnowboarding READ weatherSkiCondSnowboarding NOTIFY weatherSkiCondSnowboardingChanged)
    Q_PROPERTY(QString weatherSkiCondSnowmaking READ weatherSkiCondSnowmaking NOTIFY weatherSkiCondSnowmakingChanged)
    Q_PROPERTY(QString weatherSkiCondTrailsOpen READ weatherSkiCondTrailsOpen NOTIFY weatherSkiCondTrailsOpenChanged)
    Q_PROPERTY(QString weatherSkiCondWindCond READ weatherSkiCondWindCond NOTIFY weatherSkiCondWindCondChanged)
    Q_PROPERTY(QString weatherSkiConditionsDateTime READ weatherSkiConditionsDateTime NOTIFY weatherSkiConditionsDateTimeChanged)
    Q_PROPERTY(QString weatherSkiConditionsLocation READ weatherSkiConditionsLocation NOTIFY weatherSkiConditionsLocationChanged)
    Q_PROPERTY(QString weatherSkiForecast READ weatherSkiForecast NOTIFY weatherSkiForecastChanged)

    Q_PROPERTY(bool fuelPriceInfoType2Available READ fuelPriceInfoType2Available NOTIFY fuelPriceInfoType2AvailableChanged)
    Q_PROPERTY(bool fuelPriceInfoType3Available READ fuelPriceInfoType3Available NOTIFY fuelPriceInfoType3AvailableChanged)
    Q_PROPERTY(bool fuelPriceInfoType4Available READ fuelPriceInfoType4Available NOTIFY fuelPriceInfoType4AvailableChanged)
    Q_PROPERTY(bool sportsCategoriesHeadlinesAvailable READ sportsCategoriesHeadlinesAvailable NOTIFY sportsCategoriesHeadlinesAvailableChanged)
    Q_PROPERTY(bool sportsCategoriesHeadlinesEnabled READ sportsCategoriesHeadlinesEnabled NOTIFY sportsCategoriesHeadlinesEnabledChanged)
    Q_PROPERTY(bool sportsCategoriesResultsAvailable READ sportsCategoriesResultsAvailable NOTIFY sportsCategoriesResultsAvailableChanged)
    Q_PROPERTY(bool sportsCategoriesResultsEnabled READ sportsCategoriesResultsEnabled NOTIFY sportsCategoriesResultsEnabledChanged)
    Q_PROPERTY(bool sportsCategoriesScoresAvailable READ sportsCategoriesScoresAvailable NOTIFY sportsCategoriesScoresAvailableChanged)
    Q_PROPERTY(bool sportsCategoriesScoresEnabled READ sportsCategoriesScoresEnabled NOTIFY sportsCategoriesScoresEnabledChanged)
    Q_PROPERTY(bool sportsCategoriesTeamsAvailable READ sportsCategoriesTeamsAvailable NOTIFY sportsCategoriesTeamsAvailableChanged)
    Q_PROPERTY(bool sportsCategoriesTeamsEnabled READ sportsCategoriesTeamsEnabled NOTIFY sportsCategoriesTeamsEnabledChanged)
    Q_PROPERTY(bool sportsCategoriesTop25Available READ sportsCategoriesTop25Available NOTIFY sportsCategoriesTop25AvailableChanged)
    Q_PROPERTY(bool sportsCategoriesTop25Enabled READ sportsCategoriesTop25Enabled NOTIFY sportsCategoriesTop25EnabledChanged)
    Q_PROPERTY(bool sportsDetailsLastGameAvailable READ sportsDetailsLastGameAvailable NOTIFY sportsDetailsLastGameAvailableChanged)
    Q_PROPERTY(bool sportsDetailsNextGameAvailable READ sportsDetailsNextGameAvailable NOTIFY sportsDetailsNextGameAvailableChanged)
    Q_PROPERTY(bool sportsDetailsTeamIsFav READ sportsDetailsTeamIsFav NOTIFY sportsDetailsTeamIsFavChanged)
    Q_PROPERTY(bool sportsEventInfoEventInProgress READ sportsEventInfoEventInProgress NOTIFY sportsEventInfoEventInProgressChanged)
    Q_PROPERTY(bool sportsEventInfoEventIsGolf READ sportsEventInfoEventIsGolf NOTIFY sportsEventInfoEventIsGolfChanged)
    Q_PROPERTY(bool sportsEventInfoListenAvailable READ sportsEventInfoListenAvailable NOTIFY sportsEventInfoListenAvailableChanged)
    Q_PROPERTY(bool sportsLeagueisTeamBased READ sportsLeagueisTeamBased NOTIFY sportsLeagueisTeamBasedChanged)
    Q_PROPERTY(bool tunerSATAddFavArtistAllowed READ tunerSATAddFavArtistAllowed NOTIFY tunerSATAddFavArtistAllowedChanged)
    Q_PROPERTY(bool tunerSATAddFavSongAllowed READ tunerSATAddFavSongAllowed NOTIFY tunerSATAddFavSongAllowedChanged)
    Q_PROPERTY(bool tunerSATGameScoreAlertSetting READ tunerSATGameScoreAlertSetting NOTIFY tunerSATGameScoreAlertSettingChanged)
    Q_PROPERTY(bool tunerSATGameScoreAlert READ tunerSATGameScoreAlert NOTIFY tunerSATGameScoreAlertChanged)
    Q_PROPERTY(bool tunerSATGameStartAlertSetting READ tunerSATGameStartAlertSetting NOTIFY tunerSATGameStartAlertSettingChanged)
    Q_PROPERTY(bool tunerSATGameStartAlert READ tunerSATGameStartAlert NOTIFY tunerSATGameStartAlertChanged)
    Q_PROPERTY(bool tunerSATPresetRecall READ tunerSATPresetRecall NOTIFY tunerSATPresetRecallChanged)
    Q_PROPERTY(bool travelLinkBackseatTVAvailable READ travelLinkBackseatTVAvailable NOTIFY travelLinkBackseatTVAvailableChanged)
    Q_PROPERTY(bool travelLinkBackseatTVIDAvailable READ travelLinkBackseatTVIDAvailable NOTIFY travelLinkBackseatTVIDAvailableChanged)
    Q_PROPERTY(bool travelLinkFavoritesDataAvailable READ travelLinkFavoritesDataAvailable NOTIFY travelLinkFavoritesDataAvailableChanged)
    Q_PROPERTY(bool travelLinkFuelPricesDataAvailable READ travelLinkFuelPricesDataAvailable NOTIFY travelLinkFuelPricesDataAvailableChanged)
    Q_PROPERTY(bool travelLinkMoviesDataAvailable READ travelLinkMoviesDataAvailable NOTIFY travelLinkMoviesDataAvailableChanged)
    Q_PROPERTY(bool travelLinkRTTrafficAvailable READ travelLinkRTTrafficAvailable NOTIFY travelLinkRTTrafficAvailableChanged)
    Q_PROPERTY(bool travelLinkWeatherDataAvailable READ travelLinkWeatherDataAvailable NOTIFY travelLinkWeatherDataAvailableChanged)
    Q_PROPERTY(bool travelLinkSportsDataAvailable READ travelLinkSportsDataAvailable NOTIFY travelLinkSportsDataAvailableChanged)
    Q_PROPERTY(bool travelLinkTrafficDataAvailable READ travelLinkTrafficDataAvailable NOTIFY travelLinkTrafficDataAvailableChanged)
    Q_PROPERTY(bool travelLinkWeatherMapDataAvailable READ travelLinkWeatherMapDataAvailable NOTIFY travelLinkWeatherMapDataAvailableChanged)
    Q_PROPERTY(bool weatherCurrentLocationIsFav READ weatherCurrentLocationIsFav NOTIFY weatherCurrentLocationIsFavChanged)
    Q_PROPERTY(bool fuelStationInfoIsFav READ fuelStationInfoIsFav NOTIFY fuelStationInfoIsFavChanged)
    Q_PROPERTY(bool weatherSkiInfoAvailable READ weatherSkiInfoAvailable NOTIFY weatherSkiInfoAvailableChanged)
    Q_PROPERTY(bool travelLinkSXMTrafficPlusSubscribed READ travelLinkSXMTrafficPlusSubscribed NOTIFY travelLinkSXMTrafficPlusSubscribedChanged)
    Q_PROPERTY(bool travelLinkSXMBackSeatSubscribed READ travelLinkSXMBackSeatSubscribed NOTIFY travelLinkSXMBackSeatSubscribedChanged)
    Q_PROPERTY(bool travelLinkSXMSubscribed READ travelLinkSXMSubscribed NOTIFY travelLinkSXMSubscribedChanged)

    Q_PROPERTY(int fuelFavoriteStationID READ fuelFavoriteStationID NOTIFY fuelFavoriteStationIDChanged)
    Q_PROPERTY(int fuelStationInfoID READ fuelStationInfoID NOTIFY fuelStationInfoIDChanged)
    Q_PROPERTY(int graphicalWeatherAlertPopImageEnum READ graphicalWeatherAlertPopImageEnum NOTIFY graphicalWeatherAlertPopImageEnumChanged)
    Q_PROPERTY(int movieFavoriteTheatreID READ movieFavoriteTheatreID NOTIFY movieFavoriteTheatreIDChanged)
    Q_PROPERTY(int movieSynopsisDurationHours READ movieSynopsisDurationHours NOTIFY movieSynopsisDurationHoursChanged)
    Q_PROPERTY(int movieSynopsisDurationMinutes READ movieSynopsisDurationMinutes NOTIFY movieSynopsisDurationMinutesChanged)
    Q_PROPERTY(int movieTheatreInfoID READ movieTheatreInfoID NOTIFY movieTheatreInfoIDChanged)
    Q_PROPERTY(int sportsLeagueDivisionType READ sportsLeagueDivisionType NOTIFY sportsLeagueDivisionTypeChanged)
    Q_PROPERTY(int sportsDetailsTeamID READ sportsDetailsTeamID NOTIFY sportsDetailsTeamIDChanged)
    Q_PROPERTY(int sportsEventInfoListenSID READ sportsEventInfoListenSID NOTIFY sportsEventInfoListenSIDChanged)
    Q_PROPERTY(int tunerSATErrorCodes READ tunerSATErrorCodes NOTIFY tunerSATErrorCodesChanged)
    Q_PROPERTY(int tunerSATFavAlertSetting READ tunerSATFavAlertSetting NOTIFY tunerSATFavAlertSettingChanged)
    Q_PROPERTY(int tunerSATGameAlertSID READ tunerSATGameAlertSID NOTIFY tunerSATGameAlertSIDChanged)
    Q_PROPERTY(int tunerSATGameAlertTeam1Score READ tunerSATGameAlertTeam1Score NOTIFY tunerSATGameAlertTeam1ScoreChanged)
    Q_PROPERTY(int tunerSATGameAlertTeam2Score READ tunerSATGameAlertTeam2Score NOTIFY tunerSATGameAlertTeam2ScoreChanged)
    Q_PROPERTY(int tunerSATGameTeamsLeagueID READ tunerSATGameTeamsLeagueID NOTIFY tunerSATGameTeamsLeagueIDChanged)
    Q_PROPERTY(int tunerSATPresetListSelectedItem READ tunerSATPresetListSelectedItem NOTIFY tunerSATPresetListSelectedItemChanged)
    Q_PROPERTY(int tLFav5DayWeatherAvailable READ tLFav5DayWeatherAvailable NOTIFY tLFav5DayWeatherAvailableChanged)
    Q_PROPERTY(int tLFav5DayWeatherDayOfWeek1 READ tLFav5DayWeatherDayOfWeek1 NOTIFY tLFav5DayWeatherDayOfWeek1Changed)
    Q_PROPERTY(int tLFav5DayWeatherImageEnum1 READ tLFav5DayWeatherImageEnum1 NOTIFY tLFav5DayWeatherImageEnum1Changed)
    Q_PROPERTY(int tLFav5DayWeatherImageEnum2 READ tLFav5DayWeatherImageEnum2 NOTIFY tLFav5DayWeatherImageEnum2Changed)
    Q_PROPERTY(int tLFav5DayWeatherImageEnum3 READ tLFav5DayWeatherImageEnum3 NOTIFY tLFav5DayWeatherImageEnum3Changed)
    Q_PROPERTY(int tLFav5DayWeatherImageEnum4 READ tLFav5DayWeatherImageEnum4 NOTIFY tLFav5DayWeatherImageEnum4Changed)
    Q_PROPERTY(int tLFav5DayWeatherImageEnum5 READ tLFav5DayWeatherImageEnum5 NOTIFY tLFav5DayWeatherImageEnum5Changed)
    Q_PROPERTY(int tLFav5DayWeatherTemp1 READ tLFav5DayWeatherTemp1 NOTIFY tLFav5DayWeatherTemp1Changed)
    Q_PROPERTY(int tLFav5DayWeatherTemp2 READ tLFav5DayWeatherTemp2 NOTIFY tLFav5DayWeatherTemp2Changed)
    Q_PROPERTY(int tLFav5DayWeatherTemp3 READ tLFav5DayWeatherTemp3 NOTIFY tLFav5DayWeatherTemp3Changed)
    Q_PROPERTY(int tLFav5DayWeatherTemp4 READ tLFav5DayWeatherTemp4 NOTIFY tLFav5DayWeatherTemp4Changed)
    Q_PROPERTY(int tLFav5DayWeatherTemp5 READ tLFav5DayWeatherTemp5 NOTIFY tLFav5DayWeatherTemp5Changed)
    Q_PROPERTY(int tLFavCurrWeatherAvailable READ tLFavCurrWeatherAvailable NOTIFY tLFavCurrWeatherAvailableChanged)
    Q_PROPERTY(int tLFavCurrWeatherPrecip READ tLFavCurrWeatherPrecip NOTIFY tLFavCurrWeatherPrecipChanged)
    Q_PROPERTY(int tLFavCurrWeatherTemp READ tLFavCurrWeatherTemp NOTIFY tLFavCurrWeatherTempChanged)
    Q_PROPERTY(int tLFavFuelAvailable READ tLFavFuelAvailable NOTIFY tLFavFuelAvailableChanged)
    Q_PROPERTY(int tLFavMovieAvailable READ tLFavMovieAvailable NOTIFY tLFavMovieAvailableChanged)
    Q_PROPERTY(int travelLinkErrorCodes READ travelLinkErrorCodes NOTIFY travelLinkErrorCodesChanged)
    Q_PROPERTY(int travelLinkSubscriptionStatus READ travelLinkSubscriptionStatus NOTIFY travelLinkSubscriptionStatusChanged)
    Q_PROPERTY(int weather3HrPrecip READ weather3HrPrecip NOTIFY weather3HrPrecipChanged)
    Q_PROPERTY(int weather3HrTemperature READ weather3HrTemperature NOTIFY weather3HrTemperatureChanged)
    Q_PROPERTY(int weather3hrImageEnum READ weather3hrImageEnum NOTIFY weather3hrImageEnumChanged)
    Q_PROPERTY(int weather6HrPrecip READ weather6HrPrecip NOTIFY weather6HrPrecipChanged)
    Q_PROPERTY(int weather6HrTemperature READ weather6HrTemperature NOTIFY weather6HrTemperatureChanged)
    Q_PROPERTY(int weather6hrImageEnum READ weather6hrImageEnum NOTIFY weather6hrImageEnumChanged)
    Q_PROPERTY(int weatherCloudCoverEnum READ weatherCloudCoverEnum NOTIFY weatherCloudCoverEnumChanged)
    Q_PROPERTY(int weatherCurrHigh READ weatherCurrHigh NOTIFY weatherCurrHighChanged)
    Q_PROPERTY(int weatherCurrLow READ weatherCurrLow NOTIFY weatherCurrLowChanged)
    Q_PROPERTY(int weatherCurrentTemp READ weatherCurrentTemp NOTIFY weatherCurrentTempChanged)
    Q_PROPERTY(int weatherCurrentImageEnum READ weatherCurrentImageEnum NOTIFY weatherCurrentImageEnumChanged)
    Q_PROPERTY(int weatherCurrentFavImageEnum READ weatherCurrentFavImageEnum NOTIFY weatherCurrentFavImageEnumChanged)
    Q_PROPERTY(int weatherCurrentLocationID READ weatherCurrentLocationID NOTIFY weatherCurrentLocationIDChanged)
    Q_PROPERTY(int weatherDay1Precip READ weatherDay1Precip NOTIFY weatherDay1PrecipChanged)
    Q_PROPERTY(int weatherDay1HighTemp READ weatherDay1HighTemp NOTIFY weatherDay1HighTempChanged)
    Q_PROPERTY(int weatherDay1ImageEnum READ weatherDay1ImageEnum NOTIFY weatherDay1ImageEnumChanged)
    Q_PROPERTY(int weatherDay1LowTemp READ weatherDay1LowTemp NOTIFY weatherDay1LowTempChanged)
    Q_PROPERTY(int weatherDay2Precip READ weatherDay2Precip NOTIFY weatherDay2PrecipChanged)
    Q_PROPERTY(int weatherDay2HighTemp READ weatherDay2HighTemp NOTIFY weatherDay2HighTempChanged)
    Q_PROPERTY(int weatherDay2ImageEnum READ weatherDay2ImageEnum NOTIFY weatherDay2ImageEnumChanged)
    Q_PROPERTY(int weatherDay2LowTemp READ weatherDay2LowTemp NOTIFY weatherDay2LowTempChanged)
    Q_PROPERTY(int weatherDay3Precip READ weatherDay3Precip NOTIFY weatherDay3PrecipChanged)
    Q_PROPERTY(int weatherDay3HighTemp READ weatherDay3HighTemp NOTIFY weatherDay3HighTempChanged)
    Q_PROPERTY(int weatherDay3ImageEnum READ weatherDay3ImageEnum NOTIFY weatherDay3ImageEnumChanged)
    Q_PROPERTY(int weatherDay3LowTemp READ weatherDay3LowTemp NOTIFY weatherDay3LowTempChanged)
    Q_PROPERTY(int weatherDay4Precip READ weatherDay4Precip NOTIFY weatherDay4PrecipChanged)
    Q_PROPERTY(int weatherDay4HighTemp READ weatherDay4HighTemp NOTIFY weatherDay4HighTempChanged)
    Q_PROPERTY(int weatherDay4ImageEnum READ weatherDay4ImageEnum NOTIFY weatherDay4ImageEnumChanged)
    Q_PROPERTY(int weatherDay4LowTemp READ weatherDay4LowTemp NOTIFY weatherDay4LowTempChanged)
    Q_PROPERTY(int weatherDay5Precip READ weatherDay5Precip NOTIFY weatherDay5PrecipChanged)
    Q_PROPERTY(int weatherDay5HighTemp READ weatherDay5HighTemp NOTIFY weatherDay5HighTempChanged)
    Q_PROPERTY(int weatherDay5ImageEnum READ weatherDay5ImageEnum NOTIFY weatherDay5ImageEnumChanged)
    Q_PROPERTY(int weatherDay5LowTemp READ weatherDay5LowTemp NOTIFY weatherDay5LowTempChanged)
    Q_PROPERTY(int weatherForecastDayOfWeek1 READ weatherForecastDayOfWeek1 NOTIFY weatherForecastDayOfWeek1Changed)
    Q_PROPERTY(int weatherHumidityPercent READ weatherHumidityPercent NOTIFY weatherHumidityPercentChanged)
    Q_PROPERTY(int weatherPrecipDetails READ weatherPrecipDetails NOTIFY weatherPrecipDetailsChanged)
    Q_PROPERTY(float weatherPrecipAmount READ weatherPrecipAmount NOTIFY weatherPrecipAmountChanged)
    Q_PROPERTY(int weatherSkiCondBaseDepthMax READ weatherSkiCondBaseDepthMax NOTIFY weatherSkiCondBaseDepthMaxChanged)
    Q_PROPERTY(int weatherSkiCondBaseDepthMin READ weatherSkiCondBaseDepthMin NOTIFY weatherSkiCondBaseDepthMinChanged)
    Q_PROPERTY(int weatherSkiCondTemp READ weatherSkiCondTemp NOTIFY weatherSkiCondTempChanged)
    Q_PROPERTY(int weatherSkiImageEnum READ weatherSkiImageEnum NOTIFY weatherSkiImageEnumChanged)
    Q_PROPERTY(int weatherUVIndex READ weatherUVIndex NOTIFY weatherUVIndexChanged)
    Q_PROPERTY(int weatherWindSpeed READ weatherWindSpeed NOTIFY weatherWindSpeedChanged)
    Q_PROPERTY(int weatherWindDirection READ weatherWindDirection NOTIFY weatherWindDirectionChanged)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* scoreScheduleModel READ scoreScheduleModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* resultsScheduleModel READ resultsScheduleModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* resultsGolfModel READ resultsGolfModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* resultsRaceModel READ resultsRaceModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* sportsLeaguesModel READ sportsLeaguesModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* sportsLeagueDivisionsModel READ sportsLeagueDivisionsModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* sportsScheduleDatesModel READ sportsScheduleDatesModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* sportsLeagueTeamsModel READ sportsLeagueTeamsModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* sportsFavTeamsModel READ sportsFavTeamsModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::DPListModel* sportsLeagueHeadlinesModel READ sportsLeagueHeadlinesModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* fuelPricesModel READ fuelPricesModel CONSTANT)
    Q_PROPERTY(int fuelPriceSortingType READ fuelPriceSortingType NOTIFY fuelPriceSortingTypeChanged)
    Q_PROPERTY(int weatherType READ weatherType NOTIFY weatherTypeChanged)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* fuelTypesModel READ fuelTypesModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* statesListModel READ statesListModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* cityListModel READ cityListModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* skiStatesListModel READ skiStatesListModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* skiAreaListModel READ skiAreaListModel CONSTANT)
    Q_PROPERTY(AL2HMIBridge::MultiDPListModel* weatherCharIndex READ weatherCharIndex CONSTANT)
    Q_PROPERTY(QString selectedTypeName READ selectedTypeName NOTIFY selectedTypeNameChanged)
    Q_PROPERTY(QString currentLeagueName READ currentLeagueName NOTIFY currentLeagueNameChanged)
    Q_PROPERTY(QString scoreDetailsTeam1Name READ scoreDetailsTeam1Name NOTIFY scoreDetailsChanged)
    Q_PROPERTY(QString scoreDetailsTeam2Name READ scoreDetailsTeam2Name NOTIFY scoreDetailsChanged)
    Q_PROPERTY(QString scoreDetailsTeam1Abbrv READ scoreDetailsTeam1Abbrv NOTIFY scoreDetailsChanged)
    Q_PROPERTY(QString scoreDetailsTeam2Abbrv READ scoreDetailsTeam2Abbrv NOTIFY scoreDetailsChanged)
    Q_PROPERTY(bool scoreDetailsTeam1isFAV READ scoreDetailsTeam1isFAV NOTIFY scoreDetailsChanged)
    Q_PROPERTY(bool scoreDetailsTeam2isFAV READ scoreDetailsTeam2isFAV NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsTeam1ID READ scoreDetailsTeam1ID NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsTeam2ID READ scoreDetailsTeam2ID NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsTeam1Scores READ scoreDetailsTeam1Scores NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsTeam2Scores READ scoreDetailsTeam2Scores NOTIFY scoreDetailsChanged)
    Q_PROPERTY(QString scoreDetailsTime READ scoreDetailsTime NOTIFY scoreDetailsChanged)
    Q_PROPERTY(bool scoreDetailsListenNational READ scoreDetailsListenNational NOTIFY scoreDetailsChanged)
    Q_PROPERTY(bool scoreDetailsListenAway READ scoreDetailsListenAway NOTIFY scoreDetailsChanged)
    Q_PROPERTY(bool scoreDetailsListenHome READ scoreDetailsListenHome NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsClockHours READ scoreDetailsClockHours NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsClockMinutes READ scoreDetailsClockMinutes NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsListenAwayCh READ scoreDetailsListenAwayCh NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsListenHomeCh READ scoreDetailsListenHomeCh NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsListenNationalCh READ scoreDetailsListenNationalCh NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsStartHours READ scoreDetailsStartHours NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsStartMinutes READ scoreDetailsStartMinutes NOTIFY scoreDetailsChanged)
    Q_PROPERTY(int scoreDetailsType READ scoreDetailsType NOTIFY scoreDetailsChanged)

    Q_ENUMS(SortingTypes)
    Q_ENUMS(SiriusFuelPricesSearchType)
    Q_ENUMS(WeatherWindDirections)
    Q_ENUMS(SiriusWindConditions)
    Q_ENUMS(WeatherCloudCover)
    Q_ENUMS(WeatherRoadConditions)
    Q_ENUMS(WeatherAirQuality)
    Q_ENUMS(WeatherUVIndex)
    Q_ENUMS(WeatherPollenCount)
    Q_ENUMS(WeatherTypes)
    Q_ENUMS(WeatherStorm)
    Q_ENUMS(WeatherTime)
    Q_ENUMS(WeatherZoomLevel)
    Q_ENUMS(SiriusWeatherSearchAreas)
    Q_ENUMS(SiriusSubscription)
    Q_ENUMS(SiriusState)
    Q_ENUMS(SiriusDataState)
    Q_ENUMS(SiriusSkiConditionsAreas)
    Q_ENUMS(SkiAreaStatus)
    Q_ENUMS(SkiSnowConditions)
    Q_ENUMS(SkiRecentSnow)
    Q_ENUMS(MovieTypes)
    Q_ENUMS(Sirius_Games)
    Q_ENUMS(SportsScoreType)
    Q_ENUMS(SportsEventType)
    Q_ENUMS(Game_Leader)
    Q_ENUMS(Conference_Index)
    Q_ENUMS(ChargeStationsVoltageLevel)
    Q_ENUMS(ChargeStationsSearchType)
    Q_ENUMS(TrafficIncidents)
    Q_ENUMS(TrafficIncidentsSearchType)
    Q_ENUMS(FuelTypes)
    Q_ENUMS(SiriusSkiYesNoStatus)
    Q_ENUMS(Weather_Amount)
    Q_ENUMS(Ski_Lifts)
    Q_ENUMS(Ski_Trails)
    Q_ENUMS(SiriusMoviesSearchType)
    Q_ENUMS(WeatherType)

public:
    static TLSource * instance();
    void requestCurrentForecast();
    void requestNearestForecast();
    void request3HrForecast();
    void request5DayForecast();
    void requestCurrentSkiInfo();
    void requestNearestSkiInfo();
    void requestSkiStatesList();
    void requestSkiAreaList(int stateId);
    void requestSkiAreaForecast(int areaId, int stateId);
    void requestWeatherStatesList();
    void requestWeatherCityList(int stateId);
    void updateAZWeatherStateJumpIndex(int language, const QString &source);
    void updateAZWeatherJumpIndex(int language, const QString &source);
    void updateAZWeatherSkiStateJumpIndex(int language, const QString &source);
    void updateAZWeatherSkiJumpIndex(int language, const QString &source);
    void requestWeatherCityForecast(int cityId);
    void requestSubscriptionStatus();
    void requestSportsDailyScoreList();
    void requestLeagueDailyScoresList(int dateId);
    void requestFavoritesList();
    void requestWeather5DayFavorite();
    void requestWeatherFavorite();
    void requestFuelList();
    void requestFuelPricesList();
    void requestFuelDistanceList();
    void requestFuelNameList();
    void requestFuelTypesList();
    void requestFuelStationInfo(int stationId);
    void requestFuelStationPrices(int stationId);
    void selectFuelType(int typeId);
    void requestSportsList();
    void requestLeagueCategoryList(int leagueId);
    void requestLeagueTeamsList();
    void requestLeagueHeadlinesList();
    void requestLeagueTop25List();
    void requestDivisionTeamsList(int divisionId);
    void requestLeagueScheduleDatesList();
    void requestDivisionScheduleDatesList(int divisionId);
    void requestLeagueDivisionsList();
    void requestLeagueTeamDetails(int leagueId, int teamId);
    void requestLeagueScoreDetails(int index);
    void requestLeagueResultsEventDetails(int eventId);
    void requestLeagueResultsEventStandings();
    void requestScheduleDatesList();
    void deleteCurrentWeatherFavorite();
    void addCurrentWeatherFavorite();
    void requestFuelFavorite();
    void deleteCurrentFuelFavorite();
    void addCurrentFuelFavorite();
    void deleteFavoriteTeam(int leagueId, int teamId);
    void replaceFavoriteTeam(int leagueId, int teamId, int oldLeagueId, int oldTeamId);
    void addFavoriteTeam();
    void callFuelStation();
    void navToFuelStation();
    void callSubscription();

    MultiDPListModel *scoreScheduleModel() const { return m_scoreScheduleModel; }
    MultiDPListModel *resultsScheduleModel() const { return m_resultsScheduleModel; }
    MultiDPListModel *resultsGolfModel() const { return m_resultsGolfModel; }
    MultiDPListModel *resultsRaceModel() const { return m_resultsRaceModel; }
    MultiDPListModel *sportsLeaguesModel() const { return m_sportsLeaguesModel; }
    MultiDPListModel *sportsLeagueDivisionsModel() const { return m_sportsLeagueDivisionsModel; }
    MultiDPListModel *sportsScheduleDatesModel() const { return m_sportsScheduleDatesModel; }
    MultiDPListModel *sportsLeagueTeamsModel() const { return m_sportsLeagueTeamsModel; }
    MultiDPListModel *sportsFavTeamsModel() const { return m_sportsFavTeamsModel; }
    DPListModel *sportsLeagueHeadlinesModel() const { return m_sportsLeagueHeadlinesModel; }
    MultiDPListModel *fuelPricesModel() const { return m_fuelPricesModel; }
    MultiDPListModel *fuelTypesModel() const { return m_fuelTypesModel; }
    MultiDPListModel *statesListModel() const { return m_statesListModel; }
    MultiDPListModel *cityListModel() const { return m_cityListModel; }
    MultiDPListModel *skiStatesListModel() const { return m_skiStatesListModel; }
    MultiDPListModel *skiAreaListModel() const { return m_skiAreaListModel; }
    MultiDPListModel *weatherCharIndex() const { return m_weatherCharIndex; }

    enum SortingTypes
    {
        //fuel prices
        ByNameFuelPrices = 1,
        ByDistanceFuelPrices,
        ByPriceFuelPrices,
        LastFuelPrices,
        //traffic incidents
        ByNameIncidents = LastFuelPrices + 1,
        ByDelayIncidents,
        ByAvgSpeedIncidents,
        ByIncident,
        ByDistanceIncidents,
        LastIncidents,
        //movie theatres
        ByNameTheatres = LastIncidents + 1,
        ByDistanceTheatres,
        LastTheatres,
        ByDistanceChargeStations = LastTheatres + 1,
        ByNameChargeStations,
        LastChargeStations,
        // Ski resorts
        ResortsByName = LastChargeStations + 1,
        ResortsByDistance
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SiriusSubscription
    {
        SiriusSubscription_Unknown = 0,
        SiriusSubscription_Active = 1,
        SiriusSubscription_Inactive = 2
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SiriusState
    {
        SiriusState_Acquiring = 0,
        SiriusState_NoData = 1,
        SiriusState_NoStations = 2,
        SiriusState_Available = 3
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SiriusMoviesSearchType {
        SiriusMoviesSearchType_Near = 0,
        SiriusMoviesSearchType_Destination = 1,
        SiriusMoviesSearchType_OnRoute = 2
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SiriusFuelPricesSearchType {
        SiriusFuelPricesSearchType_Near = 0,
        SiriusFuelPricesSearchType_Destination = 1,
        SiriusFuelPricesSearchType_OnRoute = 2
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum ChargeStationsSearchType {
        ChargeStationsSearchType_Near = 0,
        ChargeStationsSearchType_Destination = 1,
        ChargeStationsSearchType_OnRoute = 2
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum TrafficIncidentsSearchType {
        TrafficIncidentsSearch_Nearby = 0,
        TrafficIncidentsSearch_OnRoute = 1,
        TrafficIncidentsSearch_All = 2
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum ChargeStationsVoltageLevel {
        ChargeStationsVoltageLevel_All = 0,
        ChargeStationsVoltageLevel_One = 1,
        ChargeStationsVoltageLevel_Two = 2
    };

    enum MoviesSearchFilter {
        SearchAll = 1,
        SearchById = 0
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum MovieTypes {
        MovieTypes_U = 0,
        MovieTypes_G = 1,
        MovieTypes_PG = 2,
        MovieTypes_GP13 = 3,
        MovieTypes_R = 4,
        MovieTypes_NC = 5
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SiriusSkiConditionsAreas {
        SiriusSkiConditionsArea_Nearby = 0,
        SiriusSkiConditionsArea_NearDestination = 1,
        SiriusSkiConditionsArea_AllLocation = 2,
        SiriusSkiConditionsArea_MyPlaces = 3
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SkiAreaStatus {
        SkiAreaStatus_NoData = -1,
        SkiAreaStatus_Closed = 0,
        SkiAreaStatus_Open = 1
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SkiSnowConditions {
        SiriusSkiSnowConditions_Unknown = -1,
        SiriusSkiSnowConditions_Powder = 0,
        SiriusSkiSnowConditions_HardPacked = 1,
        SiriusSkiSnowConditions_WetPacked = 2,
        SiriusSkiSnowConditions_LooseGranular = 3,
        SiriusSkiSnowConditions_WetGranular = 4,
        SiriusSkiSnowConditions_FrozenGranular = 5,
        SiriusSkiSnowConditions_Icy = 6,
        SiriusSkiSnowConditions_MixedConditions = 7
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SkiRecentSnow {
        SiriusSkiRecentSnow_Unknown = -1,
        SiriusSkiRecentSnow_Dusting = 0,
        SiriusSkiRecentSnow_1_2 = 1,
        SiriusSkiRecentSnow_2_4 = 2,
        SiriusSkiRecentSnow_4_6 = 3,
        SiriusSkiRecentSnow_6_9 = 4,
        SiriusSkiRecentSnow_9_12 = 5,
        SiriusSkiRecentSnow_12_18 = 6,
        SiriusSkiRecentSnow_18_24 = 7
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SiriusSkiYesNoStatus {
        SiriusSkiYesNoStatus_Unknown = -1,
        SiriusSkiYesNoStatus_No = 0,
        SiriusSkiYesNoStatus_Yes = 1
    };

    enum AcquiringStatus {
        AcquiringInProgress  = 0,
        AcquiringDone = 1
    };

    enum SiriusDataState {
        SiriusDataState_NoData = 0,
        SiriusDataState_Available = 1
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SiriusWeatherSearchAreas
    {
        SiriusWeatherSearchArea_Near = 0,
        SiriusWeatherSearchArea_Destination = 1,
        SiriusWeatherSearchArea_AllLocations = 2,
        SiriusWeatherSearchArea_AtHome = 3,
        SiriusWeatherSearchArea_MyPlaces = 4
    };

    enum WeatherType {
        WeatherCurrent = 0,
        Weather3Hr = 1,
        Weather5Day = 2,
        WeatherChangeLocation = 3,
        WeatherSkiInfo = 4,
        WeatherSkiChangeLocation = 5,
        WeatherFavoriteCurrent = 6,
        WeatherFavorite5Day = 7
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum WeatherWindDirections {
        WindDirection_NONE = -1,
        WindDirection_N = 0,
        WindDirection_NNE = 1,
        WindDirection_NE = 2,
        WindDirection_ENE = 3,
        WindDirection_E = 4,
        WindDirection_ESE = 5,
        WindDirection_SE = 6,
        WindDirection_SSE = 7,
        WindDirection_S = 8,
        WindDirection_SSW = 9,
        WindDirection_SW = 10,
        WindDirection_WSW = 11,
        WindDirection_W = 12,
        WindDirection_WNW = 13,
        WindDirection_NW = 14,
        WindDirection_NNW = 15
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum SiriusWindConditions {
        SiriusWindConditions_Unknown = -1,
        SiriusWindConditions_Calm = 0,
        SiriusWindConditions_Mild = 1,
        SiriusWindConditions_Moderate = 2,
        SiriusWindConditions_Strong = 3,
        SiriusWindConditions_Gusty = 4,
        SiriusWindConditions_VeryStrong = 5,
        SiriusWindConditions_NotRecommended = 6
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum WeatherCloudCover {
        CloudCover_Clear = 0,
        CloudCover_Few = 1,
        CloudCover_Scattered = 2,
        CloudCover_Broken = 3,
        CloudCover_Overcast = 4,
        CloudCover_NoData = 5
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum WeatherRoadConditions {
        RoadCondition_Ice = 1006,
        RoadCondition_DIce = 1007,
        RoadCondition_IcyPatches = 1047,
        RoadCondition_DIcyPatches = 1048,
        RoadCondition_BlackIce = 1008,
        RoadCondition_DBlackIce = 1050,
        RoadCondition_FreezingRain = 1009,
        RoadCondition_FreezingRainE = 1074,
        RoadCondition_WIcyRoads = 1010,
        RoadCondition_Slush = 1011,
        RoadCondition_Snow = 1012,
        RoadCondition_PackedSnow = 1013,
        RoadCondition_FreshSnow = 1014,
        RoadCondition_DeepSnow = 1015,
        RoadCondition_SnowDrifts = 1016,
        RoadCondition_SlipperyRoads = 1018,
        RoadCondition_SlipperyRoadsFrost = 1019,
        RoadCondition_HeavyRain = 1071,
        RoadCondition_IcyPatchesD = 1060,
        RoadCondition_DIcyPatchesD = 1061,
        RoadCondition_Hard = 1062,
        RoadCondition_RainToSnow = 1165,
        RoadCondition_SnowToRain = 1166
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum WeatherAirQuality {
        AirQuality_Good = 0,
        AirQuality_Moderate = 1,
        AirQuality_UnhealthyFS = 2,
        AirQuality_Unhealthy = 3,
        AirQuality_VUnhealthy = 4,
        AirQuality_Dangerous = 5,
        AirQuality_NoData = 6
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum WeatherUVIndex {
        UVIndex_NONE = -1,
        UVIndex_Below2 = 0,
        UVIndex_3 = 1,
        UVIndex_4 = 2,
        UVIndex_5 = 3,
        UVIndex_6 = 4,
        UVIndex_7 = 5,
        UVIndex_8 = 6,
        UVIndex_Above9 = 7
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum WeatherPollenCount {
        PollenCount_Low = 0,
        PollenCount_Moderate = 4,
        PollenCount_High = 8,
        PollenCount_NoData = 13
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum WeatherTypes {
        Weather_NoData = 0,
        Weather_Unknown = 1,
        Weather_IsolatedThunderstorms = 2,
        Weather_ScatteredThunderstorms = 3,
        Weather_ScatteredThunderstormsN = 4,
        Weather_SevereThunderstorms = 5,
        Weather_Thunderstorms = 6,
        Weather_Rain = 7,
        Weather_LightRain = 8,
        Weather_HeavyRain = 9,
        Weather_ScatteredShowers = 10,
        Weather_ScatteredShowersN = 11,
        Weather_Showers = 12,
        Weather_Drizzle = 13,
        Weather_FreezingDrizzle = 14,
        Weather_FreezingRain = 15,
        Weather_WintryMix = 16,
        Weather_MixedRainAndSnow = 17,
        Weather_MixedRainAndSleet = 18,
        Weather_MixedRainAndHail = 19,
        Weather_Hail = 20,
        Weather_Sleet = 21,
        Weather_IcePellets = 22,
        Weather_Flurries = 23,
        Weather_LightSnow = 24,
        Weather_ModerateSnow = 25,
        Weather_Snow = 26,
        Weather_HeavySnow = 27,
        Weather_ScatteredSnowShowers = 28,
        Weather_ScatteredSnowShowersN = 29,
        Weather_SnowShowers = 30,
        Weather_BlowingSnow = 31,
        Weather_Blizzard = 32,
        Weather_Sandstorm = 33,
        Weather_BlowingDust = 34,
        Weather_Dust = 35,
        Weather_Foggy = 36,
        Weather_LightFog = 37,
        Weather_ModerateFog = 38,
        Weather_HeavyFog = 39,
        Weather_Mist = 40,
        Weather_Hazy = 41,
        Weather_Smoky = 42,
        Weather_Blustery = 43,
        Weather_Windy = 44,
        Weather_Cold = 45,
        Weather_Hot = 46,
        Weather_Sunny = 47,
        Weather_MostlySunny = 48,
        Weather_ClearN = 49,
        Weather_MostlyClearN = 50,
        Weather_PartlyCloudy = 51,
        Weather_PartlyCloudyN = 52,
        Weather_MostlyCloudy = 53,
        Weather_MostlyCloudyN = 54,
        Weather_Cloudy = 55,
        Weather_TropicalStorm = 56,
        Weather_Hurricane = 57,
        Weather_FunnelCloud = 58,
        Weather_Tornado = 59
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum WeatherStorm {
        Weather_Storm_NoData = 0,
        Weather_Storm_Unknown = 1,
        Weather_Storm_Tropical_Disturbance = 2,
        Weather_Storm_Hurricane_Cat_1 = 3,
        Weather_Storm_Hurricane_Cat_2 = 4,
        Weather_Storm_Hurricane_Cat_3 = 5,
        Weather_Storm_Hurricane_Cat_4 = 6,
        Weather_Storm_Hurricane_Cat_5 = 7,
        Weather_Storm_Tropical_Storm = 8,
        Weather_Storm_Tropical_Depression = 9,
        Weather_Storm_Typhoon = 10,
        Weather_Storm_Super_Typhoon = 11,
        Weather_Storm_Tropical_Cyclone = 12,
        Weather_Storm_Hail_Probable = 13,
        Weather_Storm_Hail_Positive = 14,
        Weather_Storm_Mesocyclonic = 15,
        Weather_Storm_Tornadic = 16
    };

    enum WeatherTime {
        Weather_Time_Invalid = -1
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum WeatherZoomLevel {
        Weather_Zoom_1000_km = 0,
        Weather_Zoom_200_km = 1,
        Weather_Zoom_100_km = 2,
        Weather_Zoom_10_km = 3
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum Sirius_Games {
        Games_None = 0,
        Games_Golf = 1,
        Games_Motor = 2,
        Games_NCAAB = 3,
        Games_NCAAF = 4,
        Games_NFL = 5,
        Games_NBA = 6,
        Games_NHL = 7,
        Games_MLB = 8,
        Games_WNBA = 9,
        Games_MLS = 10,
        Games_MyTeams = 11
    };

    enum SportsScoreType {
        ScoreCompleted = 0,
        ScoreInProgress = 1,
        ScoreFuture = 2
    };

    enum SportsEventType {
        EventRaceCompleted = 0,
        EventRaceInProgress = 1,
        EventRaceFuture = 2,
        EventGolfCompleted = 3,
        EventGolfInProgress = 4,
        EventGolfFuture = 5
    };


    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum Game_Leader {
        Leader_AwayTeam = 0,
        Leader_HomeTeam = 1,
        Leader_InADraw = 2
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum Conference_Index {
        Conference_None = 0,
        Conference_Top25 = 1,
        Conference_Selected = 2
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum TrafficIncidents {
      Incidents_Accident = 1,
      Incidents_TrafficJam = 2,
      Incidents_RoadClosed = 3,
      Incidents_RoadWorks = 4,
      Incidents_Incident = 5,
      Incidents_DifficultDrivingConditions = 6,
      Incidents_SnowIce = 7,
      Incidents_SmogAlerts = 8,
      Incidents_WeatherWarning = 9,
      Incidents_ReducedVisibility = 10,
      Incidents_TurnOnRadio  = 11,
      Incidents_OtherTraffic = 12
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum Weather_Amount {
        Weather_Amount_None = 0,
        Weather_Amount_1 = 1,
        Weather_Amount_2 = 2,
        Weather_Amount_3 = 3,
        Weather_Amount_4 = 4,
        Weather_Amount_5 = 5,
        Weather_Amount_6 = 6,
        Weather_Amount_7 = 7
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum Ski_Lifts {
        Ski_Lifts_None = 0,
        Ski_Lifts_Big = 31
    };

    /*
        The below changes are incorporated as part of code cleanup of obsolete Enums and importing VP4 enums.
        The developer has to replace the hard coded values if any with new Enum identifier in this segment
        After updating, then this comment should be removed.
    */

    enum Ski_Trails {
        Ski_Trails_None = 0,
        Ski_Trails_1 = 1,
        Ski_Trails_2 = 2,
        Ski_Trails_3 = 3,
        Ski_Trails_4 = 4,
        Ski_Trails_5 = 5,
        Ski_Trails_6 = 6,
        Ski_Trails_7 = 7,
        Ski_Trails_8 = 8,
        Ski_Trails_9 = 9,
        Ski_Trails_10 = 10,
        Ski_Trails_11 = 11,
        Ski_Trails_12 = 12,
        Ski_Trails_13 = 13,
        Ski_Trails_14 = 14,
        Ski_Trails_15 = 15
    };

protected:
    void propertyValueChanged(const quint32 id, const QVariant &value);
    void messageEventReceived(const quint32 group, const quint32 id, const QVariantList &value);

public slots:
    QString fuelMainListType() const { return m_fuelMainListType; }
    QString fuelPriceInfoLastUpdatDate() const { return m_fuelPriceInfoLastUpdatDate; }
    QString fuelPriceInfoPrice1() const { return m_fuelPriceInfoPrice1; }
    QString fuelPriceInfoPrice2() const { return m_fuelPriceInfoPrice2; }
    QString fuelPriceInfoPrice3() const { return m_fuelPriceInfoPrice3; }
    QString fuelPriceInfoPrice4() const { return m_fuelPriceInfoPrice4; }
    QString fuelPriceInfoTypeName1() const { return m_fuelPriceInfoTypeName1; }
    QString fuelPriceInfoTypeName2() const { return m_fuelPriceInfoTypeName2; }
    QString fuelPriceInfoTypeName3() const { return m_fuelPriceInfoTypeName3; }
    QString fuelPriceInfoTypeName4() const { return m_fuelPriceInfoTypeName4; }
    QString fuelStationInfoAddress1() const { return m_fuelStationInfoAddress1; }
    QString fuelStationInfoAddress2() const { return m_fuelStationInfoAddress2; }
    QString fuelStationInfoName() const { return m_fuelStationInfoName; }
    QString fuelStationInfoPhoneNum() const { return m_fuelStationInfoPhoneNum; }
    QString graphicalWeatherAlertPopEndtime() const { return m_graphicalWeatherAlertPopEndtime; }
    QString graphicalWeatherAlertPopStartTime() const { return m_graphicalWeatherAlertPopStartTime; }
    QString graphicalWeatherAlertPopType() const { return m_graphicalWeatherAlertPopType; }
    QString movieShowtimesMovieName() const { return m_movieShowtimesMovieName; }
    QString movieShowtimesShowtimes() const { return m_movieShowtimesShowtimes; }
    QString movieShowtimesTheatreDate() const { return m_movieShowtimesTheatreDate; }
    QString movieShowtimesTheatreName() const { return m_movieShowtimesTheatreName; }
    QString movieSynopsisActors() const { return m_movieSynopsisActors; }
    QString movieSynopsisMovieName() const { return m_movieSynopsisMovieName; }
    QString movieSynopsisRating() const { return m_movieSynopsisRating; }
    QString movieSynopsisSynopsis() const { return m_movieSynopsisSynopsis; }
    QString movieTheatreInfoAddress1() const { return m_movieTheatreInfoAddress1; }
    QString movieTheatreInfoAddress2() const { return m_movieTheatreInfoAddress2; }
    QString movieTheatreInfoName() const { return m_movieTheatreInfoName; }
    QString movieTheatreInfoPhoneNum() const { return m_movieTheatreInfoPhoneNum; }
    QString sportsDetailsDate() const { return m_sportsDetailsDate; }
    QString sportsDetailsDivision() const { return m_sportsDetailsDivision; }
    QString sportsDetailsLastDate() const { return m_sportsDetailsLastDate; }
    QString sportsDetailsLastScore() const { return m_sportsDetailsLastScore; }
    QString sportsDetailsNextDate() const { return m_sportsDetailsNextDate; }
    QString sportsDetailsNextTeam() const { return m_sportsDetailsNextTeam; }
    QString sportsDetailsNextTime() const { return m_sportsDetailsNextTime; }
    QString sportsDetailsTeamName() const { return m_sportsDetailsTeamName; }
    QString sportsEventInfoEventLoc() const { return m_sportsEventInfoEventLoc; }
    QString sportsEventInfoEventName() const { return m_sportsEventInfoEventName; }
    QString sportsEventResultsLeaderName() const { return m_sportsEventResultsLeaderName; }
    QString sportsEventResultsRoundInfo() const { return m_sportsEventResultsRoundInfo; }
    QString sportsEventResultsRoundType() const { return m_sportsEventResultsRoundType; }
    QString sportsLeagueName() const { return m_sportsLeagueName; }
    QString sportsRaceDate() const { return m_sportsRaceDate; }
    QString sportsRaceName() const { return m_sportsRaceName; }
    QString sportsScoreListDate() const { return m_sportsScoreListDate; }
    QString tunerSATGameAlertInfo() const { return m_tunerSATGameAlertInfo; }
    QString tunerSATGameAlertTeam1Name() const { return m_tunerSATGameAlertTeam1Name; }
    QString tunerSATGameAlertTeam2Name() const { return m_tunerSATGameAlertTeam2Name; }
    QString tLFav5DayWeatherLocation() const { return m_tLFav5DayWeatherLocation; }
    QString tLFavCurrWeather() const { return m_tLFavCurrWeather; }
    QString tLFavCurrWeatherLocation() const { return m_tLFavCurrWeatherLocation; }
    QString tLFavFuelName() const { return m_tLFavFuelName; }
    QString tLFavFuelPrice() const { return m_tLFavFuelPrice; }
    QString tLFavFuelType() const { return m_tLFavFuelType; }
    QString tLFavMovieTheaterName() const { return m_tLFavMovieTheaterName; }
    QString travelLinkBackseatSubscription() const { return m_travelLinkBackseatSubscription; }
    QString travelLinkBackseatID() const { return m_travelLinkBackseatID; }
    QString travelLinkPhoneNum() const { return m_travelLinkPhoneNum; }
    QString travelLinkRTTrafficSubscription() const { return m_travelLinkRTTrafficSubscription; }
    QString travelLinkSatRadioSubscription() const { return m_travelLinkSatRadioSubscription; }
    QString travelLinkSiriusID() const { return m_travelLinkSiriusID; }
    QString travelLinkSiriusSubscription() const { return m_travelLinkSiriusSubscription; }
    QString weatherCurrentForecast() const { return m_weatherCurrentForecast; }
    QString weatherCurrentLocation() const { return m_weatherCurrentLocation; }
    QString weatherDateTime() const { return m_weatherDateTime; }
    QString weatherSkiCondLiftsOpen() const { return m_weatherSkiCondLiftsOpen; }
    QString weatherSkiCondNewSnow() const { return m_weatherSkiCondNewSnow; }
    QString weatherSkiCondNightSki() const { return m_weatherSkiCondNightSki; }
    QString weatherSkiCondOpStatus() const { return m_weatherSkiCondOpStatus; }
    QString weatherSkiCondSnowCond() const { return m_weatherSkiCondSnowCond; }
    QString weatherSkiCondSnowboarding() const { return m_weatherSkiCondSnowboarding; }
    QString weatherSkiCondSnowmaking() const { return m_weatherSkiCondSnowmaking; }
    QString weatherSkiCondTrailsOpen() const { return m_weatherSkiCondTrailsOpen; }
    QString weatherSkiCondWindCond() const { return m_weatherSkiCondWindCond; }
    QString weatherSkiConditionsDateTime() const { return m_weatherSkiConditionsDateTime; }
    QString weatherSkiConditionsLocation() const { return m_weatherSkiConditionsLocation; }
    QString weatherSkiForecast() const { return m_weatherSkiForecast; }

    bool fuelPriceInfoType2Available() const { return m_fuelPriceInfoType2Available; }
    bool fuelPriceInfoType3Available() const { return m_fuelPriceInfoType3Available; }
    bool fuelPriceInfoType4Available() const { return m_fuelPriceInfoType4Available; }
    bool sportsCategoriesHeadlinesAvailable() const { return m_sportsCategoriesHeadlinesAvailable; }
    bool sportsCategoriesHeadlinesEnabled() const { return m_sportsCategoriesHeadlinesEnabled; }
    bool sportsCategoriesResultsAvailable() const { return m_sportsCategoriesResultsAvailable; }
    bool sportsCategoriesResultsEnabled() const { return m_sportsCategoriesResultsEnabled; }
    bool sportsCategoriesScoresAvailable() const { return m_sportsCategoriesScoresAvailable; }
    bool sportsCategoriesScoresEnabled() const { return m_sportsCategoriesScoresEnabled; }
    bool sportsCategoriesTeamsAvailable() const { return m_sportsCategoriesTeamsAvailable; }
    bool sportsCategoriesTeamsEnabled() const { return m_sportsCategoriesTeamsEnabled; }
    bool sportsCategoriesTop25Available() const { return m_sportsCategoriesTop25Available; }
    bool sportsCategoriesTop25Enabled() const { return m_sportsCategoriesTop25Enabled; }
    bool sportsDetailsLastGameAvailable() const { return m_sportsDetailsLastGameAvailable; }
    bool sportsDetailsNextGameAvailable() const { return m_sportsDetailsNextGameAvailable; }
    bool sportsDetailsTeamIsFav() const { return m_sportsDetailsTeamIsFav; }
    bool sportsEventInfoEventInProgress() const { return m_sportsEventInfoEventInProgress; }
    bool sportsEventInfoEventIsGolf() const { return m_sportsEventInfoEventIsGolf; }
    bool sportsEventInfoListenAvailable() const { return m_sportsEventInfoListenAvailable; }
    bool sportsLeagueisTeamBased() const { return m_sportsLeagueisTeamBased; }
    bool tunerSATAddFavArtistAllowed() const { return m_tunerSATAddFavArtistAllowed; }
    bool tunerSATAddFavSongAllowed() const { return m_tunerSATAddFavSongAllowed; }
    bool tunerSATGameScoreAlertSetting() const { return m_tunerSATGameScoreAlertSetting; }
    bool tunerSATGameScoreAlert() const { return m_tunerSATGameScoreAlert; }
    bool tunerSATGameStartAlertSetting() const { return m_tunerSATGameStartAlertSetting; }
    bool tunerSATGameStartAlert() const { return m_tunerSATGameStartAlert; }
    bool tunerSATPresetRecall() const { return m_tunerSATPresetRecall; }
    bool travelLinkBackseatTVAvailable() const { return m_travelLinkBackseatTVAvailable; }
    bool travelLinkBackseatTVIDAvailable() const { return m_travelLinkBackseatTVIDAvailable; }
    bool travelLinkFavoritesDataAvailable() const { return m_travelLinkFavoritesDataAvailable; }
    bool travelLinkFuelPricesDataAvailable() const { return m_travelLinkFuelPricesDataAvailable; }
    bool travelLinkMoviesDataAvailable() const { return m_travelLinkMoviesDataAvailable; }
    bool travelLinkRTTrafficAvailable() const { return m_travelLinkRTTrafficAvailable; }
    bool travelLinkWeatherDataAvailable() const { return m_travelLinkWeatherDataAvailable; }
    bool travelLinkSportsDataAvailable() const { return m_travelLinkSportsDataAvailable; }
    bool travelLinkTrafficDataAvailable() const { return m_travelLinkTrafficDataAvailable; }
    bool travelLinkWeatherMapDataAvailable() const { return m_travelLinkWeatherMapDataAvailable; }
    bool weatherCurrentLocationIsFav() const { return m_weatherCurrentLocationIsFav; }
    bool fuelStationInfoIsFav() const { return m_fuelStationInfoIsFav; }
    bool weatherSkiInfoAvailable() const { return m_weatherSkiInfoAvailable; }
    bool travelLinkSXMTrafficPlusSubscribed() const { return m_travelLinkSXMTrafficPlusSubscribed; }
    bool travelLinkSXMBackSeatSubscribed() const { return m_travelLinkSXMBackSeatSubscribed; }
    bool travelLinkSXMSubscribed() const { return m_travelLinkSXMSubscribed; }

    int fuelFavoriteStationID() const { return m_fuelFavoriteStationID; }
    int fuelStationInfoID() const { return m_fuelStationInfoID; }
    int graphicalWeatherAlertPopImageEnum() const { return m_graphicalWeatherAlertPopImageEnum; }
    int movieFavoriteTheatreID() const { return m_movieFavoriteTheatreID; }
    int movieSynopsisDurationHours() const { return m_movieSynopsisDurationHours; }
    int movieSynopsisDurationMinutes() const { return m_movieSynopsisDurationMinutes; }
    int movieTheatreInfoID() const { return m_movieTheatreInfoID; }
    int sportsLeagueDivisionType() const { return m_sportsLeagueDivisionType; }
    int sportsDetailsTeamID() const { return m_sportsDetailsTeamID; }
    int sportsEventInfoListenSID() const { return m_sportsEventInfoListenSID; }
    int tunerSATErrorCodes() const { return m_tunerSATErrorCodes; }
    int tunerSATFavAlertSetting() const { return m_tunerSATFavAlertSetting; }
    int tunerSATGameAlertSID() const { return m_tunerSATGameAlertSID; }
    int tunerSATGameAlertTeam1Score() const { return m_tunerSATGameAlertTeam1Score; }
    int tunerSATGameAlertTeam2Score() const { return m_tunerSATGameAlertTeam2Score; }
    int tunerSATGameTeamsLeagueID() const { return m_tunerSATGameTeamsLeagueID; }
    int tunerSATPresetListSelectedItem() const { return m_tunerSATPresetListSelectedItem; }
    int tLFav5DayWeatherAvailable() const { return m_tLFav5DayWeatherAvailable; }
    int tLFav5DayWeatherDayOfWeek1() const { return m_tLFav5DayWeatherDayOfWeek1; }
    int tLFav5DayWeatherImageEnum1() const { return m_tLFav5DayWeatherImageEnum1; }
    int tLFav5DayWeatherImageEnum2() const { return m_tLFav5DayWeatherImageEnum2; }
    int tLFav5DayWeatherImageEnum3() const { return m_tLFav5DayWeatherImageEnum3; }
    int tLFav5DayWeatherImageEnum4() const { return m_tLFav5DayWeatherImageEnum4; }
    int tLFav5DayWeatherImageEnum5() const { return m_tLFav5DayWeatherImageEnum5; }
    int tLFav5DayWeatherTemp1() const { return m_tLFav5DayWeatherTemp1; }
    int tLFav5DayWeatherTemp2() const { return m_tLFav5DayWeatherTemp2; }
    int tLFav5DayWeatherTemp3() const { return m_tLFav5DayWeatherTemp3; }
    int tLFav5DayWeatherTemp4() const { return m_tLFav5DayWeatherTemp4; }
    int tLFav5DayWeatherTemp5() const { return m_tLFav5DayWeatherTemp5; }
    int tLFavCurrWeatherAvailable() const { return m_tLFavCurrWeatherAvailable; }
    int tLFavCurrWeatherPrecip() const { return m_tLFavCurrWeatherPrecip; }
    int tLFavCurrWeatherTemp() const { return m_tLFavCurrWeatherTemp; }
    int tLFavFuelAvailable() const { return m_tLFavFuelAvailable; }
    int tLFavMovieAvailable() const { return m_tLFavMovieAvailable; }
    int travelLinkErrorCodes() const { return m_travelLinkErrorCodes; }
    int travelLinkSubscriptionStatus() const { return m_travelLinkSubscriptionStatus; }
    int weather3HrPrecip() const { return m_weather3HrPrecip; }
    int weather3HrTemperature() const { return m_weather3HrTemperature; }
    int weather3hrImageEnum() const { return m_weather3hrImageEnum; }
    int weather6HrPrecip() const { return m_weather6HrPrecip; }
    int weather6HrTemperature() const { return m_weather6HrTemperature; }
    int weather6hrImageEnum() const { return m_weather6hrImageEnum; }
    int weatherCloudCoverEnum() const { return m_weatherCloudCoverEnum; }
    int weatherCurrHigh() const { return m_weatherCurrHigh; }
    int weatherCurrLow() const { return m_weatherCurrLow; }
    int weatherCurrentTemp() const { return m_weatherCurrentTemp; }
    int weatherCurrentImageEnum() const { return m_weatherCurrentImageEnum; }
    int weatherCurrentFavImageEnum() const { return m_weatherCurrentFavImageEnum; }
    int weatherCurrentLocationID() const { return m_weatherCurrentLocationID; }
    int weatherDay1Precip() const { return m_weatherDay1Precip; }
    int weatherDay1HighTemp() const { return m_weatherDay1HighTemp; }
    int weatherDay1ImageEnum() const { return m_weatherDay1ImageEnum; }
    int weatherDay1LowTemp() const { return m_weatherDay1LowTemp; }
    int weatherDay2Precip() const { return m_weatherDay2Precip; }
    int weatherDay2HighTemp() const { return m_weatherDay2HighTemp; }
    int weatherDay2ImageEnum() const { return m_weatherDay2ImageEnum; }
    int weatherDay2LowTemp() const { return m_weatherDay2LowTemp; }
    int weatherDay3Precip() const { return m_weatherDay3Precip; }
    int weatherDay3HighTemp() const { return m_weatherDay3HighTemp; }
    int weatherDay3ImageEnum() const { return m_weatherDay3ImageEnum; }
    int weatherDay3LowTemp() const { return m_weatherDay3LowTemp; }
    int weatherDay4Precip() const { return m_weatherDay4Precip; }
    int weatherDay4HighTemp() const { return m_weatherDay4HighTemp; }
    int weatherDay4ImageEnum() const { return m_weatherDay4ImageEnum; }
    int weatherDay4LowTemp() const { return m_weatherDay4LowTemp; }
    int weatherDay5Precip() const { return m_weatherDay5Precip; }
    int weatherDay5HighTemp() const { return m_weatherDay5HighTemp; }
    int weatherDay5ImageEnum() const { return m_weatherDay5ImageEnum; }
    int weatherDay5LowTemp() const { return m_weatherDay5LowTemp; }
    int weatherForecastDayOfWeek1() const { return m_weatherForecastDayOfWeek1; }
    int weatherHumidityPercent() const { return m_weatherHumidityPercent; }
    int weatherPrecipDetails() const { return m_weatherPrecipDetails; }
    float weatherPrecipAmount() const { return m_weatherPrecipAmount; }
    int weatherSkiCondBaseDepthMax() const { return m_weatherSkiCondBaseDepthMax; }
    int weatherSkiCondBaseDepthMin() const { return m_weatherSkiCondBaseDepthMin; }
    int weatherSkiCondTemp() const { return m_weatherSkiCondTemp; }
    int weatherSkiImageEnum() const { return m_weatherSkiImageEnum; }
    int weatherUVIndex() const { return m_weatherUVIndex; }
    int weatherWindSpeed() const { return m_weatherWindSpeed; }
    int weatherWindDirection() const { return m_weatherWindDirection; }
    int fuelPriceSortingType() const { return m_fuelPriceSortingType; }
    int weatherType() const { return m_weatherType; }
    void setWeatherType(int type);
    QString selectedTypeName() const;
    QString currentLeagueName() const { return m_currentLeagueName; }
    int currentLeagueId() const { return m_currentLeagueId; }
    QString scoreDetailsTeam1Name() const { return m_scoreDetailsTeam1Name; }
    QString scoreDetailsTeam2Name() const { return m_scoreDetailsTeam2Name; }
    QString scoreDetailsTeam1Abbrv() const { return m_scoreDetailsTeam1Abbrv; }
    QString scoreDetailsTeam2Abbrv() const { return m_scoreDetailsTeam2Abbrv; }
    bool scoreDetailsTeam1isFAV() const { return m_scoreDetailsTeam1isFAV; }
    bool scoreDetailsTeam2isFAV() const { return m_scoreDetailsTeam2isFAV; }
    int scoreDetailsTeam1ID() const { return m_scoreDetailsTeam1ID; }
    int scoreDetailsTeam2ID() const { return m_scoreDetailsTeam2ID; }
    int scoreDetailsTeam1Scores() const { return m_scoreDetailsTeam1Scores; }
    int scoreDetailsTeam2Scores() const { return m_scoreDetailsTeam2Scores; }
    QString scoreDetailsTime() const { return m_scoreDetailsTime; }
    bool scoreDetailsListenNational() const { return m_scoreDetailsListenNational; }
    bool scoreDetailsListenAway() const { return m_scoreDetailsListenAway; }
    bool scoreDetailsListenHome() const { return m_scoreDetailsListenHome; }
    int scoreDetailsClockHours() const { return m_scoreDetailsClockHours; }
    int scoreDetailsClockMinutes() const { return m_scoreDetailsClockMinutes; }
    int scoreDetailsListenAwayCh() const { return m_scoreDetailsListenAwayCh; }
    int scoreDetailsListenHomeCh() const { return m_scoreDetailsListenHomeCh; }
    int scoreDetailsListenNationalCh() const { return m_scoreDetailsListenNationalCh; }
    int scoreDetailsStartHours() const { return m_scoreDetailsStartHours; }
    int scoreDetailsStartMinutes() const { return m_scoreDetailsStartMinutes; }
    int scoreDetailsType() const { return m_scoreDetailsType; }

signals:
    void fuelMainListTypeChanged(const QString &fuelMainListType);
    void fuelPriceInfoLastUpdatDateChanged(const QString &fuelPriceInfoLastUpdatDate);
    void fuelPriceInfoPrice1Changed(const QString &fuelPriceInfoPrice1);
    void fuelPriceInfoPrice2Changed(const QString &fuelPriceInfoPrice2);
    void fuelPriceInfoPrice3Changed(const QString &fuelPriceInfoPrice3);
    void fuelPriceInfoPrice4Changed(const QString &fuelPriceInfoPrice4);
    void fuelPriceInfoTypeName1Changed(const QString &fuelPriceInfoTypeName1);
    void fuelPriceInfoTypeName2Changed(const QString &fuelPriceInfoTypeName2);
    void fuelPriceInfoTypeName3Changed(const QString &fuelPriceInfoTypeName3);
    void fuelPriceInfoTypeName4Changed(const QString &fuelPriceInfoTypeName4);
    void fuelStationInfoAddress1Changed(const QString &fuelStationInfoAddress1);
    void fuelStationInfoAddress2Changed(const QString &fuelStationInfoAddress2);
    void fuelStationInfoNameChanged(const QString &fuelStationInfoName);
    void fuelStationInfoPhoneNumChanged(const QString &fuelStationInfoPhoneNum);
    void graphicalWeatherAlertPopEndtimeChanged(const QString &graphicalWeatherAlertPopEndtime);
    void graphicalWeatherAlertPopStartTimeChanged(const QString &graphicalWeatherAlertPopStartTime);
    void graphicalWeatherAlertPopTypeChanged(const QString &graphicalWeatherAlertPopType);
    void movieShowtimesMovieNameChanged(const QString &movieShowtimesMovieName);
    void movieShowtimesShowtimesChanged(const QString &movieShowtimesShowtimes);
    void movieShowtimesTheatreDateChanged(const QString &movieShowtimesTheatreDate);
    void movieShowtimesTheatreNameChanged(const QString &movieShowtimesTheatreName);
    void movieSynopsisActorsChanged(const QString &movieSynopsisActors);
    void movieSynopsisMovieNameChanged(const QString &movieSynopsisMovieName);
    void movieSynopsisRatingChanged(const QString &movieSynopsisRating);
    void movieSynopsisSynopsisChanged(const QString &movieSynopsisSynopsis);
    void movieTheatreInfoAddress1Changed(const QString &movieTheatreInfoAddress1);
    void movieTheatreInfoAddress2Changed(const QString &movieTheatreInfoAddress2);
    void movieTheatreInfoNameChanged(const QString &movieTheatreInfoName);
    void movieTheatreInfoPhoneNumChanged(const QString &movieTheatreInfoPhoneNum);
    void sportsDetailsDateChanged(const QString &sportsDetailsDate);
    void sportsDetailsDivisionChanged(const QString &sportsDetailsDivision);
    void sportsDetailsLastDateChanged(const QString &sportsDetailsLastDate);
    void sportsDetailsLastScoreChanged(const QString &sportsDetailsLastScore);
    void sportsDetailsNextDateChanged(const QString &sportsDetailsNextDate);
    void sportsDetailsNextTeamChanged(const QString &sportsDetailsNextTeam);
    void sportsDetailsNextTimeChanged(const QString &sportsDetailsNextTime);
    void sportsDetailsTeamNameChanged(const QString &sportsDetailsTeamName);
    void sportsEventInfoEventLocChanged(const QString &sportsEventInfoEventLoc);
    void sportsEventInfoEventNameChanged(const QString &sportsEventInfoEventName);
    void sportsEventResultsLeaderNameChanged(const QString &sportsEventResultsLeaderName);
    void sportsEventResultsRoundInfoChanged(const QString &sportsEventResultsRoundInfo);
    void sportsEventResultsRoundTypeChanged(const QString &sportsEventResultsRoundType);
    void sportsLeagueNameChanged(const QString &sportsLeagueName);
    void sportsRaceDateChanged(const QString &sportsRaceDate);
    void sportsRaceNameChanged(const QString &sportsRaceName);
    void sportsScoreListDateChanged(const QString &sportsScoreListDate);
    void tunerSATGameAlertInfoChanged(const QString &tunerSATGameAlertInfo);
    void tunerSATGameAlertTeam1NameChanged(const QString &tunerSATGameAlertTeam1Name);
    void tunerSATGameAlertTeam2NameChanged(const QString &tunerSATGameAlertTeam2Name);
    void tLFav5DayWeatherLocationChanged(const QString &tLFav5DayWeatherLocation);
    void tLFavCurrWeatherChanged(const QString &tLFavCurrWeather);
    void tLFavCurrWeatherLocationChanged(const QString &tLFavCurrWeatherLocation);
    void tLFavFuelNameChanged(const QString &tLFavFuelName);
    void tLFavFuelPriceChanged(const QString &tLFavFuelPrice);
    void tLFavFuelTypeChanged(const QString &tLFavFuelType);
    void tLFavMovieTheaterNameChanged(const QString &tLFavMovieTheaterName);
    void travelLinkBackseatSubscriptionChanged(const QString &travelLinkBackseatSubscription);
    void travelLinkBackseatIDChanged(const QString &travelLinkBackseatID);
    void travelLinkPhoneNumChanged(const QString &travelLinkPhoneNum);
    void travelLinkRTTrafficSubscriptionChanged(const QString &travelLinkRTTrafficSubscription);
    void travelLinkSatRadioSubscriptionChanged(const QString &travelLinkSatRadioSubscription);
    void travelLinkSiriusIDChanged(const QString &travelLinkSiriusID);
    void travelLinkSiriusSubscriptionChanged(const QString &travelLinkSiriusSubscription);
    void weatherCurrentForecastChanged(const QString &weatherCurrentForecast);
    void weatherCurrentLocationChanged(const QString &weatherCurrentLocation);
    void weatherDateTimeChanged(const QString &weatherDateTime);
    void weatherSkiCondLiftsOpenChanged(const QString &weatherSkiCondLiftsOpen);
    void weatherSkiCondNewSnowChanged(const QString &weatherSkiCondNewSnow);
    void weatherSkiCondNightSkiChanged(const QString &weatherSkiCondNightSki);
    void weatherSkiCondOpStatusChanged(const QString &weatherSkiCondOpStatus);
    void weatherSkiCondSnowCondChanged(const QString &weatherSkiCondSnowCond);
    void weatherSkiCondSnowboardingChanged(const QString &weatherSkiCondSnowboarding);
    void weatherSkiCondSnowmakingChanged(const QString &weatherSkiCondSnowmaking);
    void weatherSkiCondTrailsOpenChanged(const QString &weatherSkiCondTrailsOpen);
    void weatherSkiCondWindCondChanged(const QString &weatherSkiCondWindCond);
    void weatherSkiConditionsDateTimeChanged(const QString &weatherSkiConditionsDateTime);
    void weatherSkiConditionsLocationChanged(const QString &weatherSkiConditionsLocation);
    void weatherSkiForecastChanged(const QString &weatherSkiForecast);

    void fuelPriceInfoType2AvailableChanged(bool fuelPriceInfoType2Available);
    void fuelPriceInfoType3AvailableChanged(bool fuelPriceInfoType3Available);
    void fuelPriceInfoType4AvailableChanged(bool fuelPriceInfoType4Available);
    void sportsCategoriesHeadlinesAvailableChanged(bool sportsCategoriesHeadlinesAvailable);
    void sportsCategoriesHeadlinesEnabledChanged(bool sportsCategoriesHeadlinesEnabled);
    void sportsCategoriesResultsAvailableChanged(bool sportsCategoriesResultsAvailable);
    void sportsCategoriesResultsEnabledChanged(bool sportsCategoriesResultsEnabled);
    void sportsCategoriesScoresAvailableChanged(bool sportsCategoriesScoresAvailable);
    void sportsCategoriesScoresEnabledChanged(bool sportsCategoriesScoresEnabled);
    void sportsCategoriesTeamsAvailableChanged(bool sportsCategoriesTeamsAvailable);
    void sportsCategoriesTeamsEnabledChanged(bool sportsCategoriesTeamsEnabled);
    void sportsCategoriesTop25AvailableChanged(bool sportsCategoriesTop25Available);
    void sportsCategoriesTop25EnabledChanged(bool sportsCategoriesTop25Enabled);
    void sportsDetailsLastGameAvailableChanged(bool sportsDetailsLastGameAvailable);
    void sportsDetailsNextGameAvailableChanged(bool sportsDetailsNextGameAvailable);
    void sportsDetailsTeamIsFavChanged(bool sportsDetailsTeamIsFav);
    void sportsEventInfoEventInProgressChanged(bool sportsEventInfoEventInProgress);
    void sportsEventInfoEventIsGolfChanged(bool sportsEventInfoEventIsGolf);
    void sportsEventInfoListenAvailableChanged(bool sportsEventInfoListenAvailable);
    void sportsLeagueisTeamBasedChanged(bool sportsLeagueisTeamBased);
    void tunerSATAddFavArtistAllowedChanged(bool tunerSATAddFavArtistAllowed);
    void tunerSATAddFavSongAllowedChanged(bool tunerSATAddFavSongAllowed);
    void tunerSATGameScoreAlertSettingChanged(bool tunerSATGameScoreAlertSetting);
    void tunerSATGameScoreAlertChanged(bool tunerSATGameScoreAlert);
    void tunerSATGameStartAlertSettingChanged(bool tunerSATGameStartAlertSetting);
    void tunerSATGameStartAlertChanged(bool tunerSATGameStartAlert);
    void tunerSATPresetRecallChanged(bool tunerSATPresetRecall);
    void travelLinkBackseatTVAvailableChanged(bool travelLinkBackseatTVAvailable);
    void travelLinkBackseatTVIDAvailableChanged(bool travelLinkBackseatTVIDAvailable);
    void travelLinkFavoritesDataAvailableChanged(bool travelLinkFavoritesDataAvailable);
    void travelLinkFuelPricesDataAvailableChanged(bool travelLinkFuelPricesDataAvailable);
    void travelLinkMoviesDataAvailableChanged(bool travelLinkMoviesDataAvailable);
    void travelLinkRTTrafficAvailableChanged(bool travelLinkRTTrafficAvailable);
    void travelLinkWeatherDataAvailableChanged(bool travelLinkWeatherDataAvailable);
    void travelLinkSportsDataAvailableChanged(bool travelLinkSportsDataAvailable);
    void travelLinkTrafficDataAvailableChanged(bool travelLinkTrafficDataAvailable);
    void travelLinkWeatherMapDataAvailableChanged(bool travelLinkWeatherMapDataAvailable);
    void weatherCurrentLocationIsFavChanged(bool weatherCurrentLocationIsFav);
    void fuelStationInfoIsFavChanged(bool fuelStationInfoIsFav);
    void weatherSkiInfoAvailableChanged(bool weatherSkiInfoAvailable);
    void travelLinkSXMTrafficPlusSubscribedChanged(bool travelLinkSXMTrafficPlusSubscribed);
    void travelLinkSXMBackSeatSubscribedChanged(bool travelLinkSXMBackSeatSubscribed);
    void travelLinkSXMSubscribedChanged(bool travelLinkSXMSubscribed);

    void fuelFavoriteStationIDChanged(int fuelFavoriteStationID);
    void fuelStationInfoIDChanged(int fuelStationInfoID);
    void graphicalWeatherAlertPopImageEnumChanged(int graphicalWeatherAlertPopImageEnum);
    void movieFavoriteTheatreIDChanged(int movieFavoriteTheatreID);
    void movieSynopsisDurationHoursChanged(int movieSynopsisDurationHours);
    void movieSynopsisDurationMinutesChanged(int movieSynopsisDurationMinutes);
    void movieTheatreInfoIDChanged(int movieTheatreInfoID);
    void sportsLeagueDivisionTypeChanged(int sportsLeagueDivisionType);
    void sportsDetailsTeamIDChanged(int sportsDetailsTeamID);
    void sportsEventInfoListenSIDChanged(int sportsEventInfoListenSID);
    void tunerSATErrorCodesChanged(int tunerSATErrorCodes);
    void tunerSATFavAlertSettingChanged(int tunerSATFavAlertSetting);
    void tunerSATGameAlertSIDChanged(int tunerSATGameAlertSID);
    void tunerSATGameAlertTeam1ScoreChanged(int tunerSATGameAlertTeam1Score);
    void tunerSATGameAlertTeam2ScoreChanged(int tunerSATGameAlertTeam2Score);
    void tunerSATGameTeamsLeagueIDChanged(int tunerSATGameTeamsLeagueID);
    void tunerSATPresetListSelectedItemChanged(int tunerSATPresetListSelectedItem);
    void tLFav5DayWeatherAvailableChanged(int tLFav5DayWeatherAvailable);
    void tLFav5DayWeatherDayOfWeek1Changed(int tLFav5DayWeatherDayOfWeek1);
    void tLFav5DayWeatherImageEnum1Changed(int tLFav5DayWeatherImageEnum1);
    void tLFav5DayWeatherImageEnum2Changed(int tLFav5DayWeatherImageEnum2);
    void tLFav5DayWeatherImageEnum3Changed(int tLFav5DayWeatherImageEnum3);
    void tLFav5DayWeatherImageEnum4Changed(int tLFav5DayWeatherImageEnum4);
    void tLFav5DayWeatherImageEnum5Changed(int tLFav5DayWeatherImageEnum5);
    void tLFav5DayWeatherTemp1Changed(int tLFav5DayWeatherTemp1);
    void tLFav5DayWeatherTemp2Changed(int tLFav5DayWeatherTemp2);
    void tLFav5DayWeatherTemp3Changed(int tLFav5DayWeatherTemp3);
    void tLFav5DayWeatherTemp4Changed(int tLFav5DayWeatherTemp4);
    void tLFav5DayWeatherTemp5Changed(int tLFav5DayWeatherTemp5);
    void tLFavCurrWeatherAvailableChanged(int tLFavCurrWeatherAvailable);
    void tLFavCurrWeatherPrecipChanged(int tLFavCurrWeatherPrecip);
    void tLFavCurrWeatherTempChanged(int tLFavCurrWeatherTemp);
    void tLFavFuelAvailableChanged(int tLFavFuelAvailable);
    void tLFavMovieAvailableChanged(int tLFavMovieAvailable);
    void travelLinkErrorCodesChanged(int travelLinkErrorCodes);
    void travelLinkSubscriptionStatusChanged(int travelLinkSubscriptionStatus);
    void weather3HrPrecipChanged(int weather3HrPrecip);
    void weather3HrTemperatureChanged(int weather3HrTemperature);
    void weather3hrImageEnumChanged(int weather3hrImageEnum);
    void weather6HrPrecipChanged(int weather6HrPrecip);
    void weather6HrTemperatureChanged(int weather6HrTemperature);
    void weather6hrImageEnumChanged(int weather6hrImageEnum);
    void weatherCloudCoverEnumChanged(int weatherCloudCoverEnum);
    void weatherCurrHighChanged(int weatherCurrHigh);
    void weatherCurrLowChanged(int weatherCurrLow);
    void weatherCurrentTempChanged(int weatherCurrentTemp);
    void weatherCurrentImageEnumChanged(int weatherCurrentImageEnum);
    void weatherCurrentFavImageEnumChanged(int weatherCurrentFavImageEnum);
    void weatherCurrentLocationIDChanged(int weatherCurrentLocationID);
    void weatherDay1PrecipChanged(int weatherDay1Precip);
    void weatherDay1HighTempChanged(int weatherDay1HighTemp);
    void weatherDay1ImageEnumChanged(int weatherDay1ImageEnum);
    void weatherDay1LowTempChanged(int weatherDay1LowTemp);
    void weatherDay2PrecipChanged(int weatherDay2Precip);
    void weatherDay2HighTempChanged(int weatherDay2HighTemp);
    void weatherDay2ImageEnumChanged(int weatherDay2ImageEnum);
    void weatherDay2LowTempChanged(int weatherDay2LowTemp);
    void weatherDay3PrecipChanged(int weatherDay3Precip);
    void weatherDay3HighTempChanged(int weatherDay3HighTemp);
    void weatherDay3ImageEnumChanged(int weatherDay3ImageEnum);
    void weatherDay3LowTempChanged(int weatherDay3LowTemp);
    void weatherDay4PrecipChanged(int weatherDay4Precip);
    void weatherDay4HighTempChanged(int weatherDay4HighTemp);
    void weatherDay4ImageEnumChanged(int weatherDay4ImageEnum);
    void weatherDay4LowTempChanged(int weatherDay4LowTemp);
    void weatherDay5PrecipChanged(int weatherDay5Precip);
    void weatherDay5HighTempChanged(int weatherDay5HighTemp);
    void weatherDay5ImageEnumChanged(int weatherDay5ImageEnum);
    void weatherDay5LowTempChanged(int weatherDay5LowTemp);
    void weatherForecastDayOfWeek1Changed(int weatherForecastDayOfWeek1);
    void weatherHumidityPercentChanged(int weatherHumidityPercent);
    void weatherPrecipDetailsChanged(int weatherPrecipDetails);
    void weatherPrecipAmountChanged(float weatherPrecipAmount);
    void weatherSkiCondBaseDepthMaxChanged(int weatherSkiCondBaseDepthMax);
    void weatherSkiCondBaseDepthMinChanged(int weatherSkiCondBaseDepthMin);
    void weatherSkiCondTempChanged(int weatherSkiCondTemp);
    void weatherSkiImageEnumChanged(int weatherSkiImageEnum);
    void weatherUVIndexChanged(int weatherUVIndex);
    void weatherWindSpeedChanged(int weatherWindSpeed);
    void weatherWindDirectionChanged(int weatherWindDirection);
    void fuelPriceSortingTypeChanged(int sortingType);
    void weatherTypeChanged(int weatherType);
    void selectedTypeNameChanged();
    void currentLeagueNameChanged(const QString& leagueName);
    void scoreDetailsChanged();
    void aZJumpWeatherIndexUpdated();
    void aZJumpWeatherStateIndexUpdated();
    void aZJumpWeatherSkiIndexUpdated();
    void aZJumpWeatherSkiStateIndexUpdated();

protected:
    virtual void writeStoredProperty(const QByteArray &propertyName, const QVariant &val);

private:
    explicit TLSource(QObject *parent = 0);

private:
    QString m_fuelMainListType;
    QString m_fuelPriceInfoLastUpdatDate;
    QString m_fuelPriceInfoPrice1;
    QString m_fuelPriceInfoPrice2;
    QString m_fuelPriceInfoPrice3;
    QString m_fuelPriceInfoPrice4;
    QString m_fuelPriceInfoTypeName1;
    QString m_fuelPriceInfoTypeName2;
    QString m_fuelPriceInfoTypeName3;
    QString m_fuelPriceInfoTypeName4;
    QString m_fuelStationInfoAddress1;
    QString m_fuelStationInfoAddress2;
    QString m_fuelStationInfoName;
    QString m_fuelStationInfoPhoneNum;
    QString m_graphicalWeatherAlertPopEndtime;
    QString m_graphicalWeatherAlertPopStartTime;
    QString m_graphicalWeatherAlertPopType;
    QString m_movieShowtimesMovieName;
    QString m_movieShowtimesShowtimes;
    QString m_movieShowtimesTheatreDate;
    QString m_movieShowtimesTheatreName;
    QString m_movieSynopsisActors;
    QString m_movieSynopsisMovieName;
    QString m_movieSynopsisRating;
    QString m_movieSynopsisSynopsis;
    QString m_movieTheatreInfoAddress1;
    QString m_movieTheatreInfoAddress2;
    QString m_movieTheatreInfoName;
    QString m_movieTheatreInfoPhoneNum;
    QString m_sportsDetailsDate;
    QString m_sportsDetailsDivision;
    QString m_sportsDetailsLastDate;
    QString m_sportsDetailsLastScore;
    QString m_sportsDetailsNextDate;
    QString m_sportsDetailsNextTeam;
    QString m_sportsDetailsNextTime;
    QString m_sportsDetailsTeamName;
    QString m_sportsEventInfoEventLoc;
    QString m_sportsEventInfoEventName;
    QString m_sportsEventResultsLeaderName;
    QString m_sportsEventResultsRoundInfo;
    QString m_sportsEventResultsRoundType;
    QString m_sportsLeagueName;
    QString m_sportsRaceDate;
    QString m_sportsRaceName;
    QString m_sportsScoreListDate;
    QString m_tunerSATGameAlertInfo;
    QString m_tunerSATGameAlertTeam1Name;
    QString m_tunerSATGameAlertTeam2Name;
    QString m_tLFav5DayWeatherLocation;
    QString m_tLFavCurrWeather;
    QString m_tLFavCurrWeatherLocation;
    QString m_tLFavFuelName;
    QString m_tLFavFuelPrice;
    QString m_tLFavFuelType;
    QString m_tLFavMovieTheaterName;
    QString m_travelLinkBackseatSubscription;
    QString m_travelLinkBackseatID;
    QString m_travelLinkPhoneNum;
    QString m_travelLinkRTTrafficSubscription;
    QString m_travelLinkSatRadioSubscription;
    QString m_travelLinkSiriusID;
    QString m_travelLinkSiriusSubscription;
    QString m_weatherCurrentForecast;
    QString m_weatherCurrentLocation;
    QString m_weatherDateTime;
    QString m_weatherSkiCondLiftsOpen;
    QString m_weatherSkiCondNewSnow;
    QString m_weatherSkiCondNightSki;
    QString m_weatherSkiCondOpStatus;
    QString m_weatherSkiCondSnowCond;
    QString m_weatherSkiCondSnowboarding;
    QString m_weatherSkiCondSnowmaking;
    QString m_weatherSkiCondTrailsOpen;
    QString m_weatherSkiCondWindCond;
    QString m_weatherSkiConditionsDateTime;
    QString m_weatherSkiConditionsLocation;
    QString m_weatherSkiForecast;

    bool m_fuelPriceInfoType2Available;
    bool m_fuelPriceInfoType3Available;
    bool m_fuelPriceInfoType4Available;
    bool m_sportsCategoriesHeadlinesAvailable;
    bool m_sportsCategoriesHeadlinesEnabled;
    bool m_sportsCategoriesResultsAvailable;
    bool m_sportsCategoriesResultsEnabled;
    bool m_sportsCategoriesScoresAvailable;
    bool m_sportsCategoriesScoresEnabled;
    bool m_sportsCategoriesTeamsAvailable;
    bool m_sportsCategoriesTeamsEnabled;
    bool m_sportsCategoriesTop25Available;
    bool m_sportsCategoriesTop25Enabled;
    bool m_sportsDetailsLastGameAvailable;
    bool m_sportsDetailsNextGameAvailable;
    bool m_sportsDetailsTeamIsFav;
    bool m_sportsEventInfoEventInProgress;
    bool m_sportsEventInfoEventIsGolf;
    bool m_sportsEventInfoListenAvailable;
    bool m_sportsLeagueisTeamBased;
    bool m_tunerSATAddFavArtistAllowed;
    bool m_tunerSATAddFavSongAllowed;
    bool m_tunerSATGameScoreAlertSetting;
    bool m_tunerSATGameScoreAlert;
    bool m_tunerSATGameStartAlertSetting;
    bool m_tunerSATGameStartAlert;
    bool m_tunerSATPresetRecall;
    bool m_travelLinkBackseatTVAvailable;
    bool m_travelLinkBackseatTVIDAvailable;
    bool m_travelLinkFavoritesDataAvailable;
    bool m_travelLinkFuelPricesDataAvailable;
    bool m_travelLinkMoviesDataAvailable;
    bool m_travelLinkRTTrafficAvailable;
    bool m_travelLinkWeatherDataAvailable;
    bool m_travelLinkSportsDataAvailable;
    bool m_travelLinkTrafficDataAvailable;
    bool m_travelLinkWeatherMapDataAvailable;
    bool m_weatherCurrentLocationIsFav;
    bool m_fuelStationInfoIsFav;
    bool m_weatherSkiInfoAvailable;
    bool m_travelLinkSXMTrafficPlusSubscribed;
    bool m_travelLinkSXMBackSeatSubscribed;
    bool m_travelLinkSXMSubscribed;

    int m_fuelFavoriteStationID;
    int m_fuelStationInfoID;
    int m_graphicalWeatherAlertPopImageEnum;
    int m_movieFavoriteTheatreID;
    int m_movieSynopsisDurationHours;
    int m_movieSynopsisDurationMinutes;
    int m_movieTheatreInfoID;
    int m_sportsLeagueDivisionType;
    int m_sportsDetailsTeamID;
    int m_sportsEventInfoListenSID;
    int m_tunerSATErrorCodes;
    int m_tunerSATFavAlertSetting;
    int m_tunerSATGameAlertSID;
    int m_tunerSATGameAlertTeam1Score;
    int m_tunerSATGameAlertTeam2Score;
    int m_tunerSATGameTeamsLeagueID;
    int m_tunerSATPresetListSelectedItem;
    int m_tLFav5DayWeatherAvailable;
    int m_tLFav5DayWeatherDayOfWeek1;
    int m_tLFav5DayWeatherImageEnum1;
    int m_tLFav5DayWeatherImageEnum2;
    int m_tLFav5DayWeatherImageEnum3;
    int m_tLFav5DayWeatherImageEnum4;
    int m_tLFav5DayWeatherImageEnum5;
    int m_tLFav5DayWeatherTemp1;
    int m_tLFav5DayWeatherTemp2;
    int m_tLFav5DayWeatherTemp3;
    int m_tLFav5DayWeatherTemp4;
    int m_tLFav5DayWeatherTemp5;
    int m_tLFavCurrWeatherAvailable;
    int m_tLFavCurrWeatherPrecip;
    int m_tLFavCurrWeatherTemp;
    int m_tLFavFuelAvailable;
    int m_tLFavMovieAvailable;
    int m_travelLinkErrorCodes;
    int m_travelLinkSubscriptionStatus;
    int m_weather3HrPrecip;
    int m_weather3HrTemperature;
    int m_weather3hrImageEnum;
    int m_weather6HrPrecip;
    int m_weather6HrTemperature;
    int m_weather6hrImageEnum;
    int m_weatherCloudCoverEnum;
    int m_weatherCurrHigh;
    int m_weatherCurrLow;
    int m_weatherCurrentTemp;
    int m_weatherCurrentImageEnum;
    int m_weatherCurrentFavImageEnum;
    int m_weatherCurrentLocationID;
    int m_weatherDay1Precip;
    int m_weatherDay1HighTemp;
    int m_weatherDay1ImageEnum;
    int m_weatherDay1LowTemp;
    int m_weatherDay2Precip;
    int m_weatherDay2HighTemp;
    int m_weatherDay2ImageEnum;
    int m_weatherDay2LowTemp;
    int m_weatherDay3Precip;
    int m_weatherDay3HighTemp;
    int m_weatherDay3ImageEnum;
    int m_weatherDay3LowTemp;
    int m_weatherDay4Precip;
    int m_weatherDay4HighTemp;
    int m_weatherDay4ImageEnum;
    int m_weatherDay4LowTemp;
    int m_weatherDay5Precip;
    int m_weatherDay5HighTemp;
    int m_weatherDay5ImageEnum;
    int m_weatherDay5LowTemp;
    int m_weatherForecastDayOfWeek1;
    int m_weatherHumidityPercent;
    int m_weatherPrecipDetails;
    float m_weatherPrecipAmount;
    int m_weatherSkiCondBaseDepthMax;
    int m_weatherSkiCondBaseDepthMin;
    int m_weatherSkiCondTemp;
    int m_weatherSkiImageEnum;
    int m_weatherUVIndex;
    int m_weatherWindSpeed;
    int m_weatherWindDirection;

    int m_fuelPriceSortingType;
    int m_weatherType;
    int m_currentLeagueId;
    int m_currentDivisionId;
    int m_currentEventId;
    QString m_currentLeagueName;

    bool m_scoreDetailsTeam1isFAV;
    bool m_scoreDetailsTeam2isFAV;
    int m_scoreDetailsTeam1ID;
    int m_scoreDetailsTeam2ID;
    int m_scoreDetailsTeam1Scores;
    int m_scoreDetailsTeam2Scores;
    QString m_scoreDetailsTime;
    QString m_scoreDetailsTeam1Name;
    QString m_scoreDetailsTeam2Name;
    QString m_scoreDetailsTeam1Abbrv;
    QString m_scoreDetailsTeam2Abbrv;
    bool m_scoreDetailsListenNational;
    bool m_scoreDetailsListenAway;
    bool m_scoreDetailsListenHome;
    int m_scoreDetailsClockHours;
    int m_scoreDetailsClockMinutes;
    int m_scoreDetailsListenAwayCh;
    int m_scoreDetailsListenHomeCh;
    int m_scoreDetailsListenNationalCh;
    int m_scoreDetailsStartHours;
    int m_scoreDetailsStartMinutes;
    int m_scoreDetailsType;

    MultiDPListModel *m_scoreScheduleModel;
    MultiDPListModel *m_resultsScheduleModel;
    MultiDPListModel *m_resultsGolfModel;
    MultiDPListModel *m_resultsRaceModel;
    MultiDPListModel *m_sportsLeaguesModel;
    MultiDPListModel *m_sportsLeagueDivisionsModel;
    MultiDPListModel *m_sportsScheduleDatesModel;
    MultiDPListModel *m_sportsLeagueTeamsModel;
    MultiDPListModel *m_sportsFavTeamsModel;
    DPListModel *m_sportsLeagueHeadlinesModel;
    MultiDPListModel *m_fuelPricesModel;
    MultiDPListModel *m_fuelTypesModel;
    MultiDPListModel *m_statesListModel;
    MultiDPListModel *m_cityListModel;
    MultiDPListModel *m_skiStatesListModel;
    MultiDPListModel *m_skiAreaListModel;
    MultiDPListModel *m_weatherCharIndex;
};
}

#endif // TRAVELLINKSOURCE_H
